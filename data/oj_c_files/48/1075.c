#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void propagate( int day ); //propagete????????????????day????
void print(); //????? 
int a[9][9] = {0}, b[9][9] = {0}, m = 0; //a????????b????????,m??????????m???

int main()
{
 	int n; //n??????
	
	cin >> m >> n;
	
	propagate( n );
	print();
	
	return 0;	  
}

void propagate( int day )
{
 	 int num = 0;
 	 
 	 if ( day == 0 )
 	 {
	  	a[4][4] = m; //????????????
		return;   
	 }
	 propagate( day - 1 ); //????????
	  
	 for ( int i = 0; i < 9; i++ )
 	 {
   	  	 for ( int j = 0; j < 9; j++ )
 	 	 {
 	   	  	 b[i][j] = 0; //??????? 
	  	 }
	 }
	 
	 for (int i = 0; i < 9; i++ )
	{
	 	for ( int j = 0; j < 9; j++ )
	 	{
 	  	 	if ( a[i][j] != 0 )
 	  	 	{
 	   	 	   	num = a[i][j]; //num?????????? 
				a[i][j] = 2 * num; //??????????? 
				b[i-1][j-1] += num; //???????????? 
				b[i-1][j] += num;
				b[i-1][j+1] += num;
				b[i+1][j] += num;
				b[i+1][j+1] += num;
				b[i+1][j-1] += num;
				b[i][j+1] += num;
				b[i][j-1] += num; 
		  	}
	   	}
 	}
 	
 	for ( int i = 0; i < 9; i++ )
	{
	 	for ( int j = 0; j < 9; j++ )
	 	{
 	  	 	a[i][j] += b[i][j]; //???????????????? 
	   	}
 	}
 	
 	return;	 
} 

void print()
{
 	 for ( int x = 0; x < 9; x++ )
  	 {
   	  	 for ( int y = 0; y < 9; y++ )
		 {
 	 	  	 if ( y == 0 )
				 cout << a[x][y]; //????????????? 
			 else if ( y == 8 )
			 	  cout << " " << a[x][y] << endl; //?????????????????? 
			 else
			 	 cout << " " << a[x][y]; //?????????? 
   		 } 
	 }
}