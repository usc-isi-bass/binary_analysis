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
	int n, time = 0, i, max = 0;
	int hi, lo;

	scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
	{
		scanf("%d %d", &hi, &lo);
		if( ( hi >= 90 ) * ( hi <= 140 ) * ( lo <= 90 ) * ( lo >= 60 ) == 1 )
		    time = time + 1;
        else 
        {
             if( time > max )
                 max = time;
             time = 0;
        }
        
        if( i == n && time > max)
            max = time;
                 
        
    }
     
   
    printf("%d", max);
    
    
    return 0;
    
          
 }



	
