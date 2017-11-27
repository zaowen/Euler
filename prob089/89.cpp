#include <iostream>
#include <fstream> 
#include <vector> 
#include <string> 
#include <cmath>

using namespace std;

std::string Int2Roman( unsigned int in ){
	std::string out = "";

	while( in > 0 ){
		if( in >= 1000){
			out += "M";
			in -= 1000;
		}
		else if( in >= 900 ){
			out += "CM";
			in -= 900;
		}
		else if( in >= 500 ){
			out += "D";
			in -= 500;
		}
		else if( in >= 400 ){
			out += "CD";
			in -= 400;
		}
		else if( in >= 100 ){
			out += "C";
			in -= 100;
		}
		else if( in >= 90 ){
			out += "XC";
			in -= 90;
		}
		else if( in >= 50 ){
			out += "L";
			in -= 50;
		}
		else if( in >= 40 ){
			out += "XL";
			in -= 40;
		}
		else if( in >= 10 ){
			out += "X";
			in -= 10;
		}
		else if( in >= 9 ){
			out += "IX";
			in -= 9;
		}
		else if( in >= 5 ){
			out += "V";
			in -= 5;
		}
		else if( in >= 4 ){
			out += "IV";
			in -= 4;
		}
		else if( in >= 1 ){
			out += "I";
			in -= 1;
		}
	}

	return out;
}

unsigned int Roman2Int( std::string in ){
	size_t i = 0;
	unsigned int total = 0;

	while( i < in.size() ){
		//if
		if( in.compare( i , 2 , "IX" ) == 0 ){
			i += 2;
			total += 9;
		}
		else if( in.compare( i , 2 , "IV" ) == 0 ){
			i += 2;
			total += 4;
		}
		else if( in.compare( i , 2 , "XC" ) == 0 ){
			i += 2;
			total += 90;
		}
		else if( in.compare( i , 2 , "XL" ) == 0 ){
			i += 2;
			total += 40;
		}
		else if( in.compare( i , 2 , "CD" ) == 0 ){
			i += 2;
			total += 400;
		}
		else if( in.compare( i , 2 , "CM" ) == 0 ){
			i += 2;
			total += 900;
		}
		else if( in.compare( i , 1 , "I" ) == 0 ){
			i += 1;
			total += 1 ;
		}
		else if( in.compare( i , 1 , "V" ) == 0 ){
			i += 1;
			total += 5;
		}
		else if( in.compare( i , 1 , "X" ) == 0 ){
			i += 1;
			total += 10;
		}
		else if( in.compare( i , 1 , "L" ) == 0 ){
			i += 1;
			total += 50;
		}
		else if( in.compare( i , 1 , "C" ) == 0 ){
			i += 1;
			total += 100;
		}
		else if( in.compare( i , 1 , "D" ) == 0 ){
			i += 1;
			total += 500;
		}
		else if( in.compare( i , 1 , "M" ) == 0 ){
			i += 1;
			total += 1000;
		}
		else{
			fprintf( stderr, "PROBLEM\n" );
			return -1;
		}
	}

	return total;
}

int main( int argc, char * argv[] )
{
	unsigned int out = 0;

	std::string str;
	cin >> str;
	while ( cin.good() ){
		out += str.size() - Int2Roman(Roman2Int( str )).size();
		cin >> str;
	}
	cout << out << endl;
	return 0;
}

