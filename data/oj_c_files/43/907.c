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
   int n,i,j,p,q,flag=0;
   scanf("%d",&n);
   for(i=3;i<=n/2;i+=2)
   {
		for(p=3;p<i/2;p+=2)
		{
			if(i%p==0)
				flag=1;
			    
		}
		for	(p=3;p<(n-i)/2;p+=2)
		{
			if((n-i)%p==0)
				flag=1;
			    
		}
		
		
			
				if(flag==0)
				{
					printf("%d %d\n",i,n-i);
					
				}
				flag=0;
			
		
	flag=0;  
   }                                                     
   return 0;
}