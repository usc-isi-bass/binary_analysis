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
	double*y;
	int M,m,i,n;

	scanf("%d",&n);
	y=(double*)malloc(sizeof(double)*n);
	double x;
	scanf("%d%d",&M,&m);
		
	x=(double)m/M;
		
	for(i=0;i<n-1;i++)
	{
		scanf("%d%d",&M,&m);
		
			y[i]=(double)m/M;
	}
	for(i=0;i<n-1;i++)
	{
			if(x-y[i]>0.05)
			{
				printf("worse\n");
			}
			
			else 
			{
				if(y[i]-x>0.05)
				{
				printf("better\n");
				}
			
			    else
				{
				printf("same\n");
				
				}
			}
	}

	free(y);
	
	return 0;
}