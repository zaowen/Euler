//PRoject euler: Problem 31
//Brogramer: PKing


/*

In England the currency is made up of pound, £, and pence, p, and there are eight coins in general circulation:

    1p, 2p, 5p, 10p, 20p, 50p, £1 (100p) and £2 (200p).

It is possible to make £2 in the following way:

    1×£1 + 1×50p + 2×20p + 1×5p + 1×2p + 3×1p

How many different ways can £2 be made using any number of coins?


*/

#include <iostream>
#include <cmath>


using namespace std;
const int coins[] = {0,1,2,5,10,20,50,100,200};
int change( int amount, int n );

int main()
{
//int coins[] = {0,1,2,5,10,20,50,100,200};
//cout << sizeof coins / sizeof coins[0] << endl;

cout << change(200 ,(sizeof coins / sizeof coins[0] )-1) <<endl;

return 1;
}

int change( int amount, int n)
{
//base case
if ( amount == 0)
	{
	return 1; // succsess
	}

if (amount < 0)
	{
	return 0; //fail
	}
if (n == 0 )
	{
	return 0;//fail
	}

return change(amount,n-1) + change( amount-coins[n], n);

}


