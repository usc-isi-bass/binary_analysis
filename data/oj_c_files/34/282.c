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

void main()
{
	int n;
	int a=3,b=1,c=2;
	int m,p;
	scanf("%d",&n);
	while (n!=1)
	{
        if(n%2!=0)
		{
			m=3*n+1;
            
		
			printf("%d*%d+%d=%d\n",n,a,b,m);
            n=m;
		}
           
		if(n%2==0)
		{
			p=n/2;
           printf("%d/%d=%d\n",n,c,p);
            n=p;
		} 
        
		
	}
		if(n==1)
	    printf("End");
	
	

	

}