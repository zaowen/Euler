/************************************************************************
Program: project Euler problem 19
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

#include <stdio.h> 
#include <time.h> 
#include <stdlib.h> 
#include <string.h>



/*********************** global symbolic constants *********************/

/*********************** global type definitions ***********************/

/*********************** function prototypes ***************************/



/************************************************************************
Function:
Author:
Description:
Parameters:
 ************************************************************************/
int main( int argc, char * argv[] )
{
	int year;
	int month;
	int sunday = 0;
	int day = 2;
	int month_arr[] = {31,28,31,30,31,30,31,31,30,31,30,31}	;

	for( year = 1901; year < 2001; year++){
		for( month = 0; month < 12; month++){
			if( year % 4 == 0 && month == 1){
				day++;

				if( year % 100 == 0 )
					day--;

				if( year % 400 == 0 )
					day++;
			}
			day = (day + month_arr[month]) % 7;

			if( day == 0){
				sunday++;
			}
		}
	}
	printf("Sundays:%d\n", sunday);
	return 0;
}

