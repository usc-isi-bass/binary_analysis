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


int main()
{
 	int xi[1000], yi[1000], time[1000] = {0}; //xi??????yi?????,time???????? 
	int i = 0, max = 0,j = 0; //i?????,max??????????
	char c; //????????
	int temp; //temp???????????? 
	
	do
	{
 	  	 cin >> xi[i]; //??????
		 i++; //i????????1? 
 	} 
 	while ( ( c = cin.get() ) == ',' ); //?????????????,?????? 
	
 	do
	{
 	  	 cin >> yi[j]; //?????? 
 	  	 j++;
 	} 
 	while ( ( c = cin.get() ) == ',' ); //?????????????,??????
	

	for ( int j = 0; j < i; j++ ) //j??j?? 
	{
	 	for ( int k = xi[j]; k < yi[j]; k++ ) //k???? 
	 	{
		 	time[k] += 1;
	  	}	
	}
	
	for ( int j = 0; j < 1000; j++ )
	{
	 	if ( time[j] > max )
	 	   max = time[j];	
	} 

	 cout << i << " " << max;
	 
	 return 0;
}