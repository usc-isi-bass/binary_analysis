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
	scanf("%d\n",&n);
	int i,j,l,min=1000,max=0;
	char a[100],b[100],c[100];
	for(i=0;i<n;i++)
	{
		for(j=0;;j++)
		{
			scanf("%c",&a[j]);
			if(a[j]==' ' || a[j]=='\n')
			{  l=j;	break; }
		}
		if(l>max)
		{
			max=l;
			for(j=0;j<l;j++)
				b[j]=a[j];
		}
	    if(l<min)
		{
			min=l;
			for(j=0;j<l;j++)
				c[j]=a[j];
		}
	}
	for(i=0;i<max;i++)
	{
		printf("%c",b[i]);
	}
	printf("\n");
	for(j=0;j<min;j++)
	{
		printf("%c",c[j]);
	}
	return 0;
}


