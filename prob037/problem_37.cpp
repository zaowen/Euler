/************************************************************************
Program: 
Author: ZArthur 
Class:
Instructor:
Date:
Description: 
Input:
Output:
Compilation instructions:
Usage:
Known bugs/missing features:
Modifications:
Date                Comment            
----    ------------------------------------------------
 ************************************************************************/

#include <iostream>
#include <fstream> 
#include <vector> 
#include <cmath>



using namespace std;
/*********************** global symbolic constants *********************/

/*********************** global type definitions ***********************/

/*********************** function prototypes ***************************/
vector<int> PRIMES = {2,3,5};
bool isPRIME( int a ){
	vector<int>::iterator it;

	if( a & 0x1 == 0 && a > 2)
			return false;

	int top = PRIMES.back();
	while( a > PRIMES.back() ){
			it = PRIMES.begin();
			top += 2;
			
			while( it != PRIMES.end() ) 
				if( top % *it++ == 0) 
					break;
			if( it == PRIMES.end() )
					PRIMES.push_back( top );

	}

		int i;
		it = PRIMES.begin();
		while( it!= PRIMES.end() ){
				if( *it++ == a )
						return true;
		}
		return false;
}

bool isLR( int n ){

		//cout << "LEFT\n";
		while( isPRIME( n ) )
		{
				//cout << n << endl;
				if( n < 10 ) {
					n = 0;
					break;
				}
				int j = 1;
				while( j < n)
						j *= 10;

				j /= 10;
				while( n > 0 ){
					n -= j;
				}
				n = n + j;
		}

		if( n == 0){
			return true;
		}
		return false;
}

bool isRL( int n ){

		while( isPRIME( n ) )
		{
		//	cout << n << endl;
			n = n / 10;
		}

		if( n == 0){
			return true;
		}
		return false;
}

/************************************************************************
Function:
Author:
Description:
Parameters:
 ************************************************************************/
int main( int argc, char * argv[] )
{
		if( isRL(3797) && isLR(3797) ){
				cout << " works \n";
		}	
		else{
			return -1;
		}

		int derp = 0;
		int sum = 0;
		for( int i = 11; derp < 11; i+=2){
				if( isRL(i) && isLR(i) ){
						cout << " found :" << i << endl;
						sum += i;
						derp++;		
			}	
		}
		cout << sum << endl;
	return 0;
}

