/************************************************************************
Program: 
Author: ZArthur 
 ************************************************************************/

#include <iostream>
#include <fstream> 
#include <vector> 
#include <cmath>

unsigned long int HEX( int n )
{
	return n * ( (2 * n) - 1 );
}

unsigned long int PEN( int n )
{
	return (n * (( (n * 3) - 1 ) >> 1) );
}
/************************************************************************
Function:
Author:
Description:
Parameters:
 ************************************************************************/
int main( int argc, char * argv[] )
{
	int hexDex = 143;
	int penDex = 166;
	unsigned long int curHex = HEX( hexDex );
	unsigned long int curPen = PEN( penDex );

	
	while( curHex != curPen ){
		if ( curHex < curPen )
			curHex = HEX( ++hexDex );
		else
			curPen = PEN( ++penDex );
	}

	printf( "%lu\n", curHex );
	return 0;
}

