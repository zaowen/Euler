//t(n) = .5*n(n+1)
#include <iostream>
#include <fstream>

using namespace std;

int main(int argv , char ** argc)
{

  fstream fin;
  fin.open( argc[1]);
	    if(fin)
	      {
	      cout << "opened file\n";
	      }
	      else
	      {
		cout << "could not open\n";
		return -1;
	      }
	    long long tri[2][20];
	    for (int i = 1; i < 20; i++)
	      {
		tri[1][i-1] = .5*i*(i+1);
	      }

	    char name[20];
	    int i = 0;
	    int count = 0;
	    int full = 0;
	    while ( fin.getline(name, 20 , ','))
	      {
		while(name[i]!='\0')
		  {
		    if(name[i]!='"')
		      {
			count += name[i] - 64;
		      }
		    i++;
		  }
		for(int j = 0; j < 20;j++)
		  {
		    if(count == tri[1][j])
		      {
			tri[0][j]++;
			full++;
		      }
		  }
		count = 0;
		i = 0;
	      }
	    cout << full << endl;
}
