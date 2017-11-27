//PRoject euler: Problem 21
//Brogramer: PKing
//Note: This motherfucker worked First try Achivement unlocked: "You feeling lucky, punk"

/*
Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.

For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.
*/

#include <iostream>
#include <cmath>
using namespace std;

int countdiv( double n);


int main()
{
int ami[10000][2];
int full = 0;
for ( int i = 1; i < 10000; i++)
	{
	ami[i-1][0] = i;
	ami[i-1][1] = countdiv(i); 
	}
for ( int i = 0; i < 10000; i++)
	{
	for( int j = i+1; j < 10000; j++)
		{
		if (ami[i][0] == ami[j][1])
			{	
			if (ami[i][1] == ami[j][0])
				{
				full += ami[i][0];
				full += ami[i][1];
				ami[j][1] = 0;
				}
			}
		}
	}
cout << "the Answer is : " << full;
}

//
//Function countdiv( double n)
/*
Arguments:
	double n: The number you want to calculate the sum of its divisors less 
		than n
Functionality:
	Checks for divisors up to and including n^.5 +1 because my pal shawn told 
	me that works, and if they are less than n it adds them to beaver because
	its almost 7am i haven't slept yet and beavers are funny.
Returns:
	The sum of the divisors of n, not including n.
Bugs:
	1. May crash for negative values of n.

*/

int countdiv( double n)
{
int max = sqrt(n)+1;
int check, beaver;
beaver = 0;
for( double i = 1; i < max; i++)
	{
	check = n/i;
	if (check == n/i&& check < n)
		{
		beaver += check;
		beaver += n/check;
		}
	}
beaver++;
return beaver;
}
