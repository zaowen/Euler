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
#include <map> 
#include <vector> 
#include <cmath>
#include <algorithm>

using namespace std;

map<long int,long int> PRIMES;
bool isPRIME( long int a ){
		//cout << a << endl;
		map<long int,long int>::iterator it = PRIMES.begin();

		if( a & 1 == 0)
				return false;
		if( a == 1)
				return false;

		while( it++ != PRIMES.end() ){
				if( a % (it -> first) == 0 ) {
						return false;
				}
		}
		return true;
}

void mkPrimes( long int a ){
		PRIMES[2] = 2; 
		PRIMES[3] = 3; 
		PRIMES[5] = 5; 



		for( long int i = 7; i < a; i += 2 ){
				if( isPRIME( i ) ){
						PRIMES[i] = i;
				}
		}
}

long int arrtoint( long int * a, long int d, long int r ){
		long int i, sum = 0;
		long int radix = 1; 
		while( r != 0){ 
			radix *= 10;
		   	r--;}
		for( i = 0 ; radix > 0; i++){
				sum += a[d+i] * radix;
				radix = radix/10;
		}
		return sum;
}

bool testsubstring(  long int * arr ){

		map< long int,long int>::iterator it = PRIMES.begin();		

		for( long int i = 0; i < 7; i++,it++){
				long int temp = arrtoint( arr, i+1, 2 );

				printf( "%ld:%ld/%ld=%ld\n" ,arrtoint( arr, 0 , 9), temp, it->second , temp % it->second );
				if( temp % it->second != 0 ){
						//printf( "%d:%d/%d=%d\n" ,arrtoint( arr, 0 , 9), temp, it->second , temp % it->second );
						return false;
				}	
		}
		return true;
}

int main( int argc, char * argv[] )
{
		long int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
		long int total = 0;

		mkPrimes( 9999 );

		do {
				if( testsubstring( arr ) ) {
						printf( "FOUND:%ld\n" , arrtoint( arr, 0, 9 ) );
						total += arrtoint( arr, 0, 9 );
				}
		} while( next_permutation( arr, arr + 10 ) );

		printf( "%ld\n" , total  );

		return 0;
}

