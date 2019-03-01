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
	int n,i,sum=0;
	scanf("%d",&n);
         for(i=0;i<=n;i++){
              sum=sum+i*i;
         }  
	for(i=0;i<=n;i++){
		if(i%7==0)
			sum=sum-i*i;
		    
                      
		else if(i%10==7)
			sum=sum-i*i;
		    
                      
        else if((i-(i%10))==70)
		    sum=sum-i*i;
	}
	printf("%d",sum);
	return 0;
}