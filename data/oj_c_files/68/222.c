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
	int n,i,k,j,m,a;
	scanf("%d",&n);
	for(i=6;i<=n;i+=2)
	{
		for(j=3;j<i;j++)
		{
		   for(k=2;k<=sqrt(j);k++)
		   {
		       if(j%k==0)
			   break;
		   }
		       if(k>sqrt(j))
			   {
		        	m=i-j;
			   }
		 	for(a=2;a<=sqrt(m);a++)
			{
	        	if(m%a==0)
			    break;
			}
		       if(a>sqrt(m))
			   {
		      	printf("%d=%d+%d\n",i,j,m);
				break;
			   }
		}
	}
	return 0;
}