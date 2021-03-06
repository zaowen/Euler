//Project Euler Problem 40
//Programer: Pking
// time ./test run
//real	0m0.038s
//user	0m0.035s
//sys	0m0.002s

/*

An irrational decimal fraction is created by concatenating the positive integers:

0.123456789101112131415161718192021...

It can be seen that the 12th digit of the fractional part is 1.

If dn represents the nth digit of the fractional part, find the value of the following expression.

d1 × d10 × d100 × d1000 × d10000 × d100000 × d1000000

*/

#include <iostream>

using namespace std;

void seperate( int n, int pigeon[], int size);

int main() 
{
int irr[1000000] = {0};
int cat[6];
int temp;
int k = 0;

for(int i = 0; irr[999999] == 0; k++)
	{
	seperate( k, cat, sizeof cat/sizeof cat[0]);
	for( int j = 5; j > -1; j--)
		{
		if (cat[j] != 10)
			{
			irr[i] = cat[j];
			i++;
			}
	//	cout << cat[j];

		}	
	//cout << endl;

	};
cout << irr[0]*irr[9]*irr[99]*irr[999] * irr[9999] * irr[99999]* irr[999999] << endl;


}

void seperate( int n, int pigeon[], int size)
{
int hole= 0;
int temp = 0;


for(int i = 0; i < size; i++)
	{
	pigeon[i] = 10;
	}

while (n != 0)
	{
	temp = n % 10;
	pigeon[hole] = temp;
	hole++;
	n = (n-temp)/10;
	}

}
