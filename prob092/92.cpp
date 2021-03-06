// Project Euler 92
//A number chain is created by continuously adding the square of the digits in a number to form a new number until it has been seen before.
//
//For example,
//
//44 → 32 → 13 → 10 → 1 → 1
//85 → 89 → 145 → 42 → 20 → 4 → 16 → 37 → 58 → 89
//
//Therefore any chain that arrives at 1 or 89 will become stuck in an endless loop. What is most amazing is that EVERY starting number will eventually arrive at 1 or 89.
//
//How many starting numbers below ten million will arrive at 89?

//Timing
//real	0m1.472s
//user	0m1.467s
//sys	0m0.004s
// -O3
//real	0m0.325s
//user	0m0.324s
//sys	0m0.001s


#include <iostream>
#include <string.h> 

#define MILL 10000001


void seperate( int n, int pigeon[], int size)
{
	int hole= 0;
	int temp = 0;

	for(int i = 0; i < size; i++)
	{
		pigeon[i] = 0;
	}

	while (n != 0)
	{
		temp = n % 10;
		pigeon[hole] = temp;
		hole++;
		n = (n-temp)/10;
	}

}

int cycle( int* garr,  int in ){

	if( garr[in] != 0){
		return garr[in];
	}

	int arr[8] = {};
	int out = 0;

	seperate( in , arr, 8);

	for( int i =0; i < 8; i++){
		out += arr[i] * arr[i];
	}

	garr[in] = cycle( garr,  out );
	return garr[in];
}


int main(){
	int w;
	unsigned int total = 0;
	int * garr;
	garr = (int*)malloc( MILL * sizeof( int ) );
	memset( garr, 0 , MILL * sizeof( int ) );

	garr[1] = 1;
	garr[89] = 89;

	for( int i = 2; i < MILL; i++){
		cycle( garr, i );
	}

	for( int i = 1; i < MILL; i++){
		if( garr[i] == 89 ){
			total++;
		}
	}

		printf( "%u\n" , total);

}
