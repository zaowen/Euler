/************************************************************************
Program: 
Author: ZArthur 
 ************************************************************************/

#include <iostream>
#include <fstream> 
#include <vector> 
#include <string>
#include <cmath>

using namespace std;

class fraction
{
	private:
		unsigned long long int first;
		unsigned long long int second;

	public:
		fraction(){
			first = 1;
			second = 1;
		}

		fraction( unsigned long long int a, unsigned long long int b){
			first = a;
			second = b;
		}

		void invert(){
			unsigned long long int temp;

			temp = first;
			first = second;
			second = temp;
		}

		fraction operator+( unsigned long long int a ){
			first = first + ( second * a );

			return *this;
		}

		std::string to_str(){
			return "first: " + std::to_string( first ) + " second: " + std::to_string( second );
		}
};


int main( int argc, char * argv[] )
{
	vector< unsigned long long int > derps;

	int i = 0;
	int k = 1;
	 

	derps.push_back(2);
	i++;
	derps.push_back(1);
	i++;
	derps.push_back( 2 * (k++));
	i++;
	

	for(; i < 101; i++){
		if( i % 3 == 0)
			derps.push_back(1);
		else if( i % 3 == 1)
			derps.push_back(1);
		else if( i % 3 == 2)
			derps.push_back( 2 * (k++));
	}
	

	fraction e( derps.back(),1 );

	derps.pop_back();

	while( !derps.empty() ){
		e.invert();
		e = e + derps.back();
		derps.pop_back();
	}

	printf( "%s\n", e.to_str().c_str() );

}

