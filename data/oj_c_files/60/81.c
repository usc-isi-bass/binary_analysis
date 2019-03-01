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
	int n,i,j,k;
	scanf("%d",&n);
	if(n<5)
		printf("empty\n");
	for(i=1;i<=n;i++)
	{	if(i%2==0)continue;
	    else for(j=2;j<=i/2+1;j++)
			{
			    if(i%j==0)break;
			    else if(j==i/2+1)
			{  if((i+2)<=n)
				for(k=2;k<=(i+2)/2;k++)
				{
					if((i+2)%k==0)break;
				    else if(k==(i+2)/2)
					printf("%d %d\n",i,i+2);}
			}
		}
			

		
	}
}