#include <iostream>

using namespace std;

bool decpal( int n )
{
  short six[6] = {0};
  int i = 0;
  for(; i < 7; i++)
    {
      if(n != 0)
	{
      six[i] = n % 10;
      n = n /10;
	}
      else
	{
	  i--;
	  break;
	}
    }

  for(int j = 0; i >= j ; i--,j++)
    {
      if( six[i] != six[j])
	{
	  return false;
	}
    }
  return true;

}

bool binpal( int n )
{
  int i,temp = 0;
  for(i = 0; n >> i != 1; i++){}
  
  int m = 1;
  while ( i > 0)
    {
      temp = (temp | (n >> i & m ) );
      i-=2;
      m <<= 1 ;
    }

  n = n & (m-1);
  return  temp == n;
}

int main()
{
  int total = 0;
  for(int i = 1; i < 1000000; i+=2)
    {
      if(decpal(i) && binpal(i))
	{
	  total += i;
	}
    }
  cout << total << endl;
}
