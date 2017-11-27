#include <iostream>
#include <cmath>


using namespace std;

long powermod( long base, long ex, long mod)
{
  if (ex == 0)
    return 1;
  
  long temp,result = 0;
 
  if(ex % 2 == 1)
    {
      result = (base* powermod(base, ex - 1, mod) )%mod;
      return result;
    }
  else
    {
      temp = powermod(base, ex/2, mod);
      result = ( temp * temp ) % mod;
      return result;
    }
} 

int main()
{
  unsigned long total = 0;
  long mod = pow(10, 10 );
  cout << sizeof(unsigned long) << endl
  << sizeof(long) << endl
  << sizeof(double) << endl
  << sizeof(int) << endl;

  for(int i = 1; i <= 1000; i++)
    {
      total += powermod(i,i,mod);
    }
  total %= mod;
  cout << total << endl;

  long result = 0;
  for (int i = 1 ; i <= 1000; i++)
    {
      long temp = i;
      for ( int j = 1; j < i; j++)
	{
	  temp *= i;
	  temp %= mod;
	}
      //cout << temp << endl << powermod(i,i,mod) << "\n\n";
      result += temp;
      result %= mod;
    }
  cout <<"fin\n"<< total <<endl<< result << endl;
}
