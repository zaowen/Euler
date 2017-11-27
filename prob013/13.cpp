#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream fin;
  fin.open("numbers.txt");
    char numb[51];
    short sum[100] = {0};
    int k;
  while (fin >> numb)
    {
 
      k = 99;
      for(int i =49; i >= 0 ; i--,k--)
	{
	  sum[k] += numb[i]-'0';
	  if(sum[k] >= 10)
	    {
	      sum[k] -= 10;
	      sum[k-1]++;
	    }
	}
    }
  int j = 0;

  while ( sum[j++] == 0);

  for(int i = 0; i < 10; i++)
    {
      cout << sum[j+i-1] << ' ';
    } 
  cout << endl;
  fin.close();
}
