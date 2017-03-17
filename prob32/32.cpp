//PRoject euler: 29 Problem
//Brogramer: PKing

/*

We shall say that an n-digit number is pandigital if it makes use of all the digits 1 to n exactly once; for example, the 5-digit number, 15234, is 1 through 5 pandigital.

The product 7254 is unusual, as the identity, 39 × 186 = 7254, containing multiplicand, multiplier, and product is 1 through 9 pandigital.

Find the sum of all products whose multiplicand/multiplier/product identity can be written as a 1 through 9 pandigital.
HINT: Some products can be obtained in more than one way so be sure to only include it once in your sum.


*/


#include <iostream>
#include <cmath>
using namespace std;

void seperate( int n, int pigeon[]);

int main()
{
int pigeon[4];
int ten = [9];
int check;
int checker[100] = {0};
int checkspot=0;
int flag = 0;
bool add = true;

for(int i = 0; i <= 9; i++)
	for(int j = 0; j <= 9; j++ )
		for(int k = 0; k <=9; k++ )
			for(int l = 0; l <=9; l++)
				for(int m = 0; m <=9; m++ )
{
check = (i*10+j)*(k*100+l*10+m);
	if (check < 9876)
	{
	cout << "testing case :"<<i*10+j<<'*'<<(k*100+l*10+m)<< '=' << check << endl;
	seperate( check, pigeon);
	for(int a = 4; a < 9; a++)
	
	}	
}	

cout << sum << endl;
}

void seperate( int n, int pigeon[])
{
int hole= 0;
int temp = 0;

for(int i = 0; i < 4; i++)
	{
	pigeon[i] = 0;
	}

while (n != 0)
	{
	temp = n % 10;
	pigeon[hole] = temp;
	hole++;
	n = (n-temp)/10;
	}
}