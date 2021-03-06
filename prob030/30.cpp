//PRoject euler: Problem 30
//Brogramer: PKing
//Achivement: under 20 mins
//Achivment: first times the charm

/*

Surprisingly there are only three numbers that can be written as the sum of fourth powers of their digits:

    1634 = 1^4 + 6^4 + 3^4 + 4^4
    8208 = 8^4 + 2^4 + 0^4 + 8^4
    9474 = 9^4 + 4^4 + 7^4 + 4^4

As 1 = 1^4 is not a sum it is not included.

The sum of these numbers is 1634 + 8208 + 9474 = 19316.

Find the sum of all the numbers that can be written as the sum of fifth powers of their digits.

*/


#include <iostream>
#include <cmath>
using namespace std;

void seperate ( int n, int pigeon[]);

int main()
{
int fifth[7] = {0};
int total = 0;
int sum = 0;

for(int i = 2; i < 1000000; i++)
	{
	seperate( i , fifth);	
	for (int j = 0; j < 7; j++)
		{
		total += pow(fifth[j],5);
		}
	if(total == i)
		{
		cout << "found a fifth sum :" << i << '\n';
		sum += i;
		}
	
		for (int j = 0; j < 7; j++)
		{
		fifth[j] = 0;
		}
		total = 0;

	}
cout << "and the answer is " << sum;
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
