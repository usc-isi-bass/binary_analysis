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
 	int num[16] = {0}, sum = 0; //num???????sum?????? 
 	int i = 0; //i????? 
 	
 	while ( 1 )
 	{
        i = 0;   //???????????? 
        sum = 0;
    
  	 	while ( 1 )
		{
		  cin >> num[i]; //???? 
		  
  	 	  if ( num[i] == -1 ) //??????-1?????? 
  	 	  	 return 0;
  	 	  if ( num[i] == 0 )  //??????0?????? 
			 break;
		  i++;	 //i?? 
	    }
		
		for ( int j = 0; j < i - 1; j++ )  //j?????? 
		{
		 	for ( int k = j + 1; k < i; k++ ) //k?????? 
		 	{
 	  		 	if ( num[j] == 2 * num[k] || num[k] == 2 * num[j] )
 	  		 	   sum++;		//???????????sum?1 
	   		} 	
	 	}
		 
		cout << sum << endl;  
   	
  	}
  	
  	return 0;
}