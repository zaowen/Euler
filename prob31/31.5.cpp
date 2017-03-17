	
 // Quote   Report    5
//if you hate recurssion, youve got to love dynamic programming [code=]
#include <iostream>
 using namespace std; 
int main() 
{ 
const int n=201, m = 9;
 int arr[n][m];
 int denom[m] ={1, 2, 5, 10, 20, 50, 100, 200};
for(int a=0; a<n; a++) 
for(int b=0; b<m; b++) 
arr[a][b] = 1;

 for(int i=1; i<n; i++) 
{ for(int j=1; j<m; j++) 
{ if(i-denom[j] >=0) arr[i][j] = arr[i][j-1]+arr[i-denom[j]][j];
 else arr[i][j] = arr[i][j-1]; 
} 
}
 cout << arr[n-1][m-1] << endl; 
return 0; 
}//[/code]
