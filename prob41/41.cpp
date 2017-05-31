#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

map<int,int> PRIMES;
bool isPRIME( int a ){
	//cout << a << endl;
	map<int,int>::iterator it = PRIMES.begin();

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

void mkPrimes( int a ){
	PRIMES[2] = 2; 
	PRIMES[3] = 3; 
	PRIMES[5] = 5; 



	for( int i = 7; i < a; i += 2 ){
		if( isPRIME( i ) ){
			PRIMES[i] = i;
		}
	}
}

int arrtoint( int * a, int d ){
	int i, sum = 0;
	int radix = 1; 
	for( i = 0 ; i < d; i++){
		sum += a[d-i-1] * radix;
		radix *= 10;
	}
	return sum;
}


int main (){


	int arr[] = {1,2,3,4,5,6,7,8,9};
	int temp;
	int answer;


	mkPrimes( 40000 );
	//cout << PRIMES.size() << endl;

	for( int i = 9; i > 0; i-- ){
		do{
			temp = arrtoint( arr ,i);

			//cout << temp << endl;
			if( isPRIME( temp ) ) {
				answer = temp;
			}

		}while( next_permutation( arr, arr + i ) );
	}
	cout << answer << endl;

	return 0;
}
