//PRoject euler: Problem 27
//Brogramer: PKing

/*
Problem 27 project Euler



Euler discovered the remarkable quadratic formula:

n² + n + 41

It turns out that the formula will produce 40 primes for the consecutive values n = 0 to 39. However, when n = 40, 402 + 40 + 41 = 40(40 + 1) + 41 is divisible by 41, and certainly when n = 41, 41² + 41 + 41 is clearly divisible by 41.

The incredible formula  n² − 79n + 1601 was discovered, which produces 80 primes for the consecutive values n = 0 to 79. The product of the coefficients, −79 and 1601, is −126479.

Considering quadratics of the form:

    n² + an + b, where |a| < 1000 and |b| < 1000

    where |n| is the modulus/absolute value of n
    e.g. |11| = 11 and |−4| = 4

Find the product of the coefficients, a and b, for the quadratic expression that produces the maximum number of primes for consecutive values of n, starting with n = 0.


*/

#include <iostream>
#include <cmath>
using namespace std;

bool isprime( int prime );
int quadprime( int n, int a, int b);

int main()
{
int abest, bbest, n, nbest;
nbest = 0;

for(int a = -1000; a <= 1000; a++)
	{
	for ( int b = -1000; b <= 1000; b++)
		{
		n = 0;
		while(isprime(quadprime(n , a , b)))
			{
			n++;
			}

		if (n > nbest)
			{
			nbest = n;
			abest = a;
			bbest= b;
			cout << "found " << nbest << "primes\n";
			};
		}
	}
cout << " the answer is " << abest*bbest;
cout << "\n a =" << abest<<"\n b ="<<bbest << "\n n = "<<nbest;
endl(cout);
}

//
//Function int quadprime( int n, int a, int b)
/*
Arguments:
	int n:
	int a:
	int b:
			Equation n^2 + a*n + b
			if you couldnt figure this out from the source
			I'm sorry you're recovering from traumatic brain
			injury
Functionality:
	See above.
Returns:
	returns value of quadratic
Bugs:
	None

*/
int quadprime( int n, int a, int b)
{
return ( pow(n, 2.0)+ a*n + b);
}

//
//Function bool isprime( int prime)
/*
Arguments:
	int prime: the number you want to see if the absolute value is prime.
Functionality:
	First checks if number is negative, if so makes it positive, then does
	a 1 check. Then a for loop checks all divisors for a clean division up to
	(prime ^ 1/2 )+1 which my good friend shawn told me will find all the 
	divisors because of reasons
Returns:
	returns true if prime is prime and false if prime is not.
Bugs:
	None

*/

bool isprime( int prime)
{
if (prime < 0)
	prime = prime * -1;
int max = sqrt(prime)+1;

if (prime == 1)
	{
	return false;
	}

for (int i = 2; i < max; i++)
	{
	if (prime%i == 0)
		return false;
	}

return true;


}
