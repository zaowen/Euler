//PRoject euler: Problem 17
//Brogramer: PKing

/*
If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?

NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance with British usage.

*/

#include <iostream>
#include <cmath>
using namespace std;

bool seperate( int n, int pigeon[]);
int wordcount( int numb[]);

int main()
{
int buffer[4];
int total = 0;

for( int i = 0; i <= 1000; i++)
	{
	seperate( i , buffer );
	total += wordcount( buffer );
	}
cout << "the answer is " << total << '\n';

}


bool seperate( int n, int pigeon[])
{
int hole= 0;
int temp = 0;

for(int i = 0; i < 4; i++)
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

int wordcount( int numb[])
{
//ones
int total = 0;
switch ( numb[0])
	{	
	case 0:
	total +=0;
	break;

	case 1:
	total +=3;
	break;

	case 2:
	total +=3;
	break;

	case 3:
	total +=5;
	break;

	case 4:
	total +=4;
	break;

	case 5:
	total +=4;
	break;

	case 6:
	total +=3;
	break;

	case 7:
	total +=5;
	break;

	case 8:
	total +=5;
	break;

	case 9:
	total += 4;
	break;

	}
//tens
switch ( numb[1])
	{	
	case 0:
	total +=0;
	break;

	case 1: //the eleven case
		switch ( numb[0])
		{	
		case 0:
		total +=3;
		break;
	
		case 1:
		total +=3;
		break;
	
		case 2:
		total +=3;	
		break;

		case 3:
		total +=3;
		break;
	
		case 4:
		total +=4;
		break;
	
		case 5:
		total +=3;
		break;
	
		case 6:
		total +=4;
		break;
	
		case 7:
		total +=4;
		break;
	
		case 8:
		total +=3;
		break;
	
		case 9:
		total += 4;
		break;
	
		}
	break;

	case 2:
	total +=6;
	break;

	case 3:
	total +=6;
	break;

	case 4:
	total +=6;
	break;

	case 5:
	total +=5;
	break;

	case 6:
	total +=5;
	break;

	case 7:
	total +=7;
	break;

	case 8:
	total +=6;
	break;

	case 9:
	total += 5;
	break;

	}
//hundreds
switch ( numb[2])
	{	
	case 0:
	total +=0;
	break;

	case 1:
	total +=3;
	break;

	case 2:
	total +=3;
	break;

	case 3:
	total +=5;
	break;

	case 4:
	total +=4;
	break;

	case 5:
	total +=4;
	break;

	case 6:
	total +=3;
	break;

	case 7:
	total +=5;
	break;

	case 8:
	total +=5;
	break;

	case 9:
	total += 4;
	break;

	}
//thousands
switch ( numb[3])
	{	
	case 0:
	total +=0;
	break;

	case 1:
	total +=3;
	break;

	case 2:
	total +=3;
	break;

	case 3:
	total +=5;
	break;

	case 4:
	total +=4;
	break;

	case 5:
	total +=4;
	break;

	case 6:
	total +=3;
	break;

	case 7:
	total +=5;
	break;

	case 8:
	total +=5;
	break;

	case 9:
	total += 4;
	break;

	}
if(numb[3] != 0)
	{
	total += 8;
	}
if(numb[2] != 0)
	{
	total += 7;
	}
if((numb[3] != 0 || numb[2] != 0 )&& (numb[1] !=0 || numb[0] != 0 ))
	{
	total += 3;
	}
return total;
}

