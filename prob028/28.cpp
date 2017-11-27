//PRoject euler: Problem 28
//Brogramer: PKing

/*


Starting with the number 1 and moving to the right in a clockwise direction a 5 by 5 spiral is formed as follows:

21 22 23 24 25
20  7  8  9 10
19  6  1  2 11
18  5  4  3 12
17 16 15 14 13

It can be verified that the sum of the numbers on the diagonals is 101.

What is the sum of the numbers on the diagonals in a squ by squ spiral formed in the same way?


*/

#include <iostream>
#include <cmath>
using namespace std;
#define squ 1001

int x = squ /2;
int y = squ/ 2;

void up(int & current, int spiral[][squ]);
void down(int & current, int spiral[][squ]);
void left(int & current, int spiral[][squ]);
void right(int & current, int spiral[][squ]);


int main()
{
int round = 1;
int count = round;
int numb = 2;
int spiral[squ][squ] = {0};
spiral[x][y] = 1;
while(x < squ-1 && y < squ-1 && y >= 0 && x >= 0)
	{
	count = round;
	while(count)
		{
		cout <<numb << endl;
		right(numb, spiral);
		count--;
			if (numb > squ*squ)
				goto link;
		}
	count = round;
	while(count)
		{
		down(numb, spiral);
		count--;	
		}

	round++;

	count = round;
	while(count)
		{
		left(numb, spiral);
		count--;
		}
	count = round;
	while(count)
		{
		up(numb, spiral);
		count--;
		}
	round++;
	}
link:

/*for(int i = 0; i < squ;i++)
	{
	for(int j = 0; j < squ;j++)
		{
		cout << spiral[j][i]<< "     ";
		}
	endl(cout);
	}
*/
double total = 0;
int j = 0;
for(int i = 0; i < squ; i++)
	{
	total += spiral[i][j]; 
	//cout << spiral[i][j]<< endl;
	j++;
	}
j=0;
cout << "test answoer"<< total << endl;
for(int i = squ-1; i >= 0; i--)
	{
	total += spiral[i][j];
	//	cout << spiral[i][j]<< endl;
	j++;
	}



cout << " test 2\n";
total--;
cout << fixed;
cout << " The answer is " << total<< '\n';
}

void up(int & current, int spiral[][squ])
{
spiral[x][y-1] = current;
y--;
current++;
}

void down(int & current, int spiral[][squ])
{
spiral[x][y+1] = current;
y++;
current++;
}

void left(int & current, int spiral[][squ])
{
spiral[x-1][y] = current;
x--;
current++;
}

void right(int & current, int spiral[][squ])
{
spiral[x+1][y] = current;
x++;
current++;
}


