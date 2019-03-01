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
	int n,k,i,j,sum,t,u;
		scanf("%d",&n);
	    scanf("%d",&k);
		for(i=1;;i++)
		{
			sum=n*i;
			t=sum;
				for(j=1;j<n;j++)
				{
					u=sum+k;
					if(u%(n-1)==0)
					{
						sum=(sum+k)*n/(n-1);
					}
					else 
					{
						sum=t;
						break;
					}
				}
				if(sum!=t)
				{
					sum=sum+k;
					printf("%d",sum);
					break;
				}
				else continue;
		}
}