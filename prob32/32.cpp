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
#include <algorithm>
#include <vector>

using namespace std;


int main () {

		vector<int> list;
		int sum = 0;
		int arr[] = {1,2,3,4,5,6,7,8,9};

		do{
				int multiplicand =  arr[0] * 10 + arr[1];
				int multiplier =  arr[2] * 100 + arr[3] * 10 + arr[4];
				int product = arr[5] * 1000 + arr[6] * 100 + arr[7] * 10 + arr[8];
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


		sort( list.begin(), list.end() );

		vector<int>::iterator it = list.begin();
		//list.resize( std::distance(list.begin(),it) );

		cout << "unique list" << endl;
		while( it != list.end() ){
				if( *(it+1) != *it ){
						cout << *it << endl;
						sum += *it++;
				}
				else
					it++;
		}

		cout << sum << endl;
}
