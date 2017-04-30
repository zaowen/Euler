#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

map<int,int> PRIMES;
bool isPRIME( int a ){
		map<int, int>::iterator it;

		if( a & 0x1 == 0 && a > 2)
				return false;

		map<int,int>::reverse_iterator top = PRIMES.rbegin();
		while( a > (*PRIMES.rbegin() ) ){
				it = PRIMES.begin();
				top += 2;

				while( it != PRIMES.end() ) 
						if( top % *it++ == 0) 
								break;
				if( it == PRIMES.end() )
						PRIMES[ top ] = top;

		}

		int i;
		//it = PRIMES.begin();
			if( PRIMES.find( a )  )
						return true;
		}
		return false;
}

int arrtoint( int * a, int d ){
		int i, sum;
		int radix = 1; 
		for( i = 0 ; i < d; i++){
				sum += a[d-i-1] * radix;
				radix *= 10;
		}
		return sum;
}


int main (){

PRIMES[2] = 2; 
PRIMES[3] = 3; 
PRIMES[5] = 5; 

		int arr[] = {1,2,3,4,5,6,7,8,9};
		int best = 1;
		int	temp = 1;

		cout << isPRIME(1000000001) << endl;

		for( int i = 9; i > 0; i-- ){
				do{
						int temp = arrtoint( arr ,i) ;

						if(isPRIME( temp ) ) {
								if( temp  > best ){
										best = temp;
								}	
						}
				}while( next_permutation( arr, arr + i ) );
		}

		cout << best << endl;
		return -1;
}
