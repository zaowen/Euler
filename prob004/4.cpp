//PRoject euler: Problem 4
//Brogramer: PKing

/* 
Problem 4 Project Euler

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/

#include <iostream>
#include <cmath>
using namespace std;

bool ispalin( int n);

int main()
{
int big = 0;
for (int i = 100; i < 1000; i++)
	{
	for (int j = 100; j < 1000; j++)
		{
		if( ispalin( i * j ))
			{
			if ( i * j > big)
				{
				
				big = i*j;
				};
			};
		}
	}
cout << "Answer is :"<< big << '\n';

}

//
//Function bool ispalin( int n)
/*
Arguments:
	int n: integer you want to know if is a palendrome.
Functionality:
	Seperates a number into an array by decimal place then searches
	from both sides to see if the number reads the same way backwards
	and forwards.
	Palindrome,n: shit that be the same both ways, 12344321.
Returns:
	returns true if number is palindrome, false if not.
Bugs:
	1.Not enough pigeon jokes
	2. May break fro negative values of n
	3. Size of n is limited by pigeon[]

*/
bool ispalin( int n)
{
int pigeon[8] = {0};
int hole= 0;
int toed = 0;

while (n != 0)
	{
	toed = n % 10;
	pigeon[hole] = toed;
	hole++;
	n = (n-toed)/10;
	}
toed = 0;
hole--;
while( toed <= hole)
	{
	if (pigeon[toed] != pigeon[hole])
		{
		return false;
		}
	toed++;
	hole--;
	}
return true;
}
