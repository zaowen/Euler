/************************************************************************
Program: Project Euler problem 18
Author: ZArthur 
Class:
Instructor:
Date:
Description:Find the maximum total from top to bottom of the triangle below:

75
95 64
17 47 82
18 35 87 10
20 04 82 47 65
19 01 23 75 03 34
88 02 77 73 07 63 67
99 65 04 28 06 16 70 92
41 41 26 56 83 40 80 70 33
41 48 72 33 47 32 37 16 94 29
53 71 44 65 25 43 91 52 97 51 14
70 11 33 28 77 73 17 78 39 68 17 57
91 71 52 38 17 14 91 43 58 50 27 29 48
63 66 04 68 89 53 67 30 73 16 69 87 40 31
04 62 98 27 23 09 70 98 73 93 38 53 60 04 23
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
#include <string>
#include <cmath>

using namespace std;

/*********************** global symbolic constants *********************/

/*********************** global type definitions ***********************/

/*********************** function prototypes ***************************/
int find_best( int t[100][100], int lev, int col);


/************************************************************************
Function:
Author:
Description:
Parameters:
 ************************************************************************/
int main( int argc, char * argv[] )
{
	if( argc < 3){
		cout << "Too Few args, expected: 3\n";
		exit(-1);
	}

	ifstream fin;

	fin.open(argv[1]);

	int h = stoi( argv[2]);

	if( h > 100){
		cout << "hight too large\n";
		exit(-1);
	}//fi
	int triangle[100][100];

	for( int i = 0; i < h; i++){
		for( int j = 0; j < i + 1; j++ ){
			fin >> triangle[i][j];
		}//rof
	}//rof


	for( int i = 0; i < h; i++){
		for( int j = 0; j < i + 1; j++ ){
			triangle[i][j] += find_best( triangle, i, j);
		}//rof
	}//rof

	int max = 0;
	for( int i = 0; i < h; i++){
		if( triangle[h-1][i] > max)
			max = triangle[h-1][i];
		//fi
	}//rof

	for( int i = 0; i < h; i++){
		for( int j = 0; j < i + 1; j++ ){
			cout << triangle[i][j] << ",";
		}//rof
		cout<< endl;
	}//rof
	cout << "Largest path:" << max << endl;

	return 0;
}

int find_best( int t[100][100], int lev, int col){
	if( lev == 0)
		return 0;	
	//fi
	if( lev == col)
		return t[lev-1][col-1];
	//fi
	if( col == 0)
		return t[lev-1][0];
	//fi

	if( t[lev-1][col-1] > t[lev-1][col] )
		return t[lev-1][col-1];

	else
		return	t[lev-1][col];
	//fi

}

