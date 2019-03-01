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
 	int N, i = 1; //N????N??, i????? 
	int result[40]= {0}; //result????,2?100??????40?? 
	
	cin >> N;
	result[0] = 1; //2?0???1 
	
	while ( i <= N )
	{
	 	  for ( int j = 0; j < 39; j++ )
	 	  {
 	  	   	  result[j] *= 2; //?????2 
 		  }
 		  
 		  for ( int k = 0; k < 39; k++ )
 		  {
 	  	   	  if ( result[k] >= 10 )
 	  	   	  {
 			   	 result[k+1] += result[k] / 10; //??
				 result[k] %= 10; //????????? 
		   	  }
 		  }
 	 	  i++;
 	}
	
 	i = 39; //??????????????????result 
	
	while ( result[i] == 0 )
	{
 	 	  i--; //??????? 
 	}
	 
    for ( int k = i; k >= 0; k-- )
	 	 cout << result[k]; //????result
	
	return 0; 
}