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
	int i,j,m,n,k;
	
	
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
    
	    for(j=3;j<i;j=j+2)
			
		{
		for(k=2;k<=sqrt(j);k++)
		{if(j%k==0) break;}
				if(k>sqrt(j))
					m=i-j;
				for(k=2;k<=sqrt(m);k++)
				{if(m%k==0) break;}
				if(k>sqrt(m)&&j<=m&&m>1)
		
				{printf("%d=%d+%d\n",i,j,m);
				break;}
		}
		
				
        
	
}