//Project Euler Problem 40
//Programer: Pking
// time ./test run
//real	0m0.026s
//user	0m0.024s
//sys	0m0.002s

/*

145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.

Find the sum of all numbers which are equal to the sum of the factorial of their digits.

Note: as 1! = 1 and 2! = 2 are not sums they are not included.

*/

#include <iostream>

using namespace std;

void seperate( int n, int pigeon[], int size);
int factorial(int n);

int main()
{
int fact[10];
int sum = 0;
int answer = 0;

for(int i = 3; i < 50000 ;i++)
	{
	seperate( i, fact, sizeof fact/ sizeof fact[0]);
	for(int j = 0; j < 10; j++)
		{
			if( fact[j] != -1)
			{	
			sum += factorial(fact[j]);
			}
		}
	if(sum == i)
		{
		answer += sum;
		}
	sum = 0;
	}
cout << answer << endl;

}

int factorial(int n)
{
return ( n < 1 ? 1: factorial(n-1)*n);
}

void seperate( int n, int pigeon[], int size)
{
int hole= 0;
int temp = 0;


for(int i = 0; i < size; i++)
	{
	pigeon[i] = -1;
	}

while (n != 0)
	{
	temp = n % 10;
	pigeon[hole] = temp;
	hole++;
	n = (n-temp)/10;
	}

}
