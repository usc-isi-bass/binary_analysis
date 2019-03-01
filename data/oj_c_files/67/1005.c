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
	int n,i,a,b;
	double z[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		z[i]=(double)b/(double)a;
	}
	for(i=1;i<n;i++)
	{
		if(z[i]-z[0]>0.05)
		{
			printf("better");
			if(i!=n-1)
			{
				printf("\n");
			}
		}
		if(z[0]-z[i]>0.05)
		{
			printf("worse");
	if(i!=n-1)
			{
				printf("\n");
			}
		} 
		if(z[i]-z[0]<0.05&&z[0]-z[i]<0.05)
		{
			printf("same");
	if(i!=n-1)
			{
				printf("\n");
			}
		}
	}
	return 0;
}