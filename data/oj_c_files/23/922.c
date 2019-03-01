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
	int n,i,j,x;
	char a[100],b[100]="\0";
	gets(a);
	n=strlen(a);
	x=n;
	for(j=n-1;j>=0;j--)
	{
		if (a[j]==' ')
		{
			for (i=j+1;i<x;i++)
			{
				b[n-x-1+i-j]=a[i];	
			}
			x=j;
			b[n-1-j]=a[j];
		}
	}
	if (j<0)
		for (i=0;i<x;i++)
			b[n-x+i]=a[i];
	printf("%s",b);
}