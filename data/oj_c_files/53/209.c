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
	int mm[301]={0};
	int i,n,j;
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		scanf("%d", &mm[i]);
	}

	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (mm[j]==mm[i]) 
				mm[j]=0;
		}
	}

	for (i=0;i<n;i++)
	{
		if (mm[i]!=0 && i==0)
		printf("%d", mm[i]);
		else if (mm[i]!=0 && i>0)
		printf(",%d", mm[i]);
		else;
	}
}
