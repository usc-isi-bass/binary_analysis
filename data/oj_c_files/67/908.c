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
	int n,i;
	int a[100],b[100];
	double k[100]; 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		k[i]=(double)b[i]/a[i];
	}
	for(i=1;i<n;i++)
	{
		if((k[i]-k[0])>0.05)
		{
			printf("better");
			printf("\n");
		}
		if((k[0]-k[i])>0.05)
		{
			printf("worse");
			printf("\n");
		}
		if((k[i]-k[0])<=0.05&&(k[0]-k[i])<=0.05)
		{
			printf("same");	
			printf("\n");
		}
	}

	return 0;
}