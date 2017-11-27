#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a[1000] = {0};
  double c;
  for(int i = 1; i < 1000; i++)
    for(int j = 1; j < 1000; j++)
      {
	if(i+j < 560)
	  {
	    c = sqrt(i*i+j*j);
	    if( c - (int)c == 0)  
	      {
		a[i+j+(int)c]++;
	      }
	  }
      }
  cout << arrbest(a,1000) << endl;
}
