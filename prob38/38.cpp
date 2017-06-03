//PRoject euler: 38 Problem
//Brogramer: ZArthur

/*
Take the number 192 and multiply it by each of 1, 2, and 3:

192 × 1 = 192
192 × 2 = 384
192 × 3 = 576
By concatenating each product we get the 1 to 9 pandigital, 192384576. We will call 192384576 the concatenated product of 192 and (1,2,3)

The same can be achieved by starting with 9 and multiplying by 1, 2, 3, 4, and 5, giving the pandigital, 918273645, which is the concatenated product of 9 and (1,2,3,4,5).

What is the largest 1 to 9 pandigital 9-digit number that can be formed as the concatenated product of an integer with (1,2, ... , n) where n > 1?

*/


#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int arrtonum( int * a , int s ){

	int mult = 1;
	int ret = 0;

	while( --s > 0) { mult *=10; }; 
	while( s > 0 ) { ret += a[};

}

int main () {

		vector<int> list;
		int sum = 0;
		int arr[] = {9,1,8,2,7,3,6,4,5};

		do{
				int multiplicand =  arr[0] * 1000 + arr[1] * 100
				//cout << multiplicand << " * " << multiplier << " = " << product << endl;

				if( multiplicand * multiplier == product ){
						list.push_back( product );
					cout << multiplicand << " * " << multiplier << " = " << product << endl;
				}
				multiplicand =  arr[0];
				multiplier =  arr[1] * 1000 + arr[2] * 100 + arr[3] * 10 + arr[4];
				product = arr[5] * 1000 + arr[6] * 100 + arr[7] * 10 + arr[8];

				if( multiplicand * multiplier == product ){
						list.push_back( product );
					cout << multiplicand << " * " << multiplier << " = " << product << endl;
				}

		}while( next_permutation( arr, arr + 9 ) );


		cout << sum << endl;
}
