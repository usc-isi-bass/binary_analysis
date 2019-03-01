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
	int n;
	int z[300];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&z[i]);
	}
	for(int j=1;j<n;j++)
	{
		for(int x=0;x<j;x++)
		{
			if(z[x]==z[j])
				z[j]=0;
		}
	}
         printf("%d",z[0]);
	for(int t=1;t<n;t++)
	{
		if(z[t]!=0)
			printf(",%d",z[t]);
	}
	return 0;
}


