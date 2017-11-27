
#include <stdio.h>
#include <math.h>

int main(){
	int base, exp , i, index;
	float best, temp;
	
	scanf ( "%d, %d\n", &base, &exp );

	best = 	exp * log10(base);

	index = 1;

	for( i = 2; i < 1001 ; i++){
		scanf ( "%d, %d\n", &base, &exp );
		temp = 	 exp *log10(base);

		if( temp > best ){
			best = temp;
			index = i;
		}
	}

	printf( "%d" , index);
}
