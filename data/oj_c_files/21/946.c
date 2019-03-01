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
	int n,sum=0,i,j,a[301],temp;
	double ave;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",(a+i));
	for(i=0;i<n;i++)
		sum+=*(a+i);
	ave=(double)sum/(double)n;
	for(j=1;j<n;j++)
	{
		for(i=0;i<n-j;i++)
		{
			if(fabs(ave-*(a+i))<fabs(ave-*(a+i+1)))
			{
				temp=*(a+i);
				*(a+i)=*(a+i+1);
				*(a+i+1)=temp;
			}
		}
	}
	temp=0;
	for(i=0;i<n;i++)
	{
		if(fabs(ave-*(a+i))!=fabs(ave-*(a+i+1)))
		{
			if(temp==0)
			{
				printf("%d",*(a+i));
				temp++;
			}
			else
				printf(",%d",*(a+i));
			break;
		}
		else
		{
			if(temp==0)
			{
				printf("%d",*(a+i));
				temp++;
			}
			else
				printf(",%d",*(a+i));
		}
	}
	printf("\n");
	return 0;
}