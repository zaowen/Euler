#include <iostream>
#include <fstream>

using namespace std;

int up( int  grid[][20], int x, int y)
{
  return grid[x][y] *grid[x][y+1]*grid[x][y+2]*grid[x][y+3];
}

int right( int  grid[][20], int x, int y)
{
  return grid[x][y]*grid[x+1][y]*grid[x+2][y]*grid[x+3][y];
}

int dodia( int  grid[][20], int x, int y)
{
  return grid[x][y]*grid[x+1][y+1]*grid[x+2][y+2]*grid[x+3][y+3];
}

int updia( int  grid[][20], int x, int y)
{
  return grid[x][y]*grid[x+1][y-1]*grid[x+2][y-2]*grid[x+3][y-3];
}

int main ()
{
  ifstream fin;
  fin.open("number.txt");

  if(!fin)
    {
      cout << "fileerror";
      return 0;
    }
  int grid[20][20];

  for(int i = 0; i < 20 ;i++)
    {
    for( int j = 0; j < 20 ;j++)
      {
	fin >> grid[i][j];
	cout << grid[i][j] << ' ';
      }
    cout << endl;
    }
  int best, temp = 0;

  for(int i = 0; i < 20 ;i++)
    for( int j = 0; j < 20 ;j++)
      {
	if(j <= 16)
	  {
	   temp = up(grid, i,j);
	   if (temp > best)
	     best = temp;
	     
	   if( i <= 16)
	     temp = dodia(grid, i,j);
	   if (temp > best)
	     best = temp;
	  }
	  if(i <= 16)
	    {
	    temp = right(grid, i,j);
	   if (temp > best)
	     best = temp;
	   
	   if(j >= 3)
	     temp = updia(grid, i,j);
	   if (temp > best)
	     best = temp;
	  }
      }
  if (best > 99*99*99*99)
    cout << "yall fucked up yo\n";
  cout << best << endl;
  return 0;
}

