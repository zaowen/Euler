//PRoject euler: Problem 30
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
#

using namespace std;


int main()
{
int total = 0;
for(int i = 0; i <= 1; i++)
	for(int j = 0; j <= 2; j++ )
		for(int k = 0; k <=4; k++ )
			for(int l = 0; l <=10; l++)
				for(int m = 0; m <=20; m++ )
					for(int n=0; n <= 40; n++)
						for(int o = 0; o <= 100; o++)
							for(int p =0 ; p<=200; p++)
{
if(i*200+j*100+k*50+l*20+m*10+n*5+o*2+p == 200)
	{
	total++;
	}
}
cout << "the answer might be :" << total << '\n';

}
