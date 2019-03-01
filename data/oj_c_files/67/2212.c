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
	int n,i,j;
	double a,b;
	scanf("%d",&n);
	double*s=(double*)malloc(sizeof(double)*n);
	double*z=(double*)malloc(sizeof(double)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&s[i],&z[i]);
	}
	for(i=1;i<n;i++)
	{
		a=z[0]*1000/s[0];
		b=z[i]*1000/s[i];
		if(b-a>50)
			{
				printf("better\n");
			}
		else if(a-b>50)
		{
			printf("worse\n");
		}
		else {
			printf("same\n");
		}

		
	}
		return 0;
}