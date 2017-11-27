#include <iostream>

using namespace std;


unsigned long long fact2( int n )
{
  return ( n==1 || n == 0 ) ? : fact2(n-1) * n;
}

unsigned long long  fact(int n)
{
  if( n > 20)
    return 0;
  else 
    return fact2( n );
}

int main()
{
  __int128 test;
  cout << fact(40)/(fact(20)*fact(20)) << endl;
}
