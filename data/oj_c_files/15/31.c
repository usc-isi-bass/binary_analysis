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
	int a[100][100],b,c,d,e,f,g,h;
	scanf("%d",&b);
	g=0;
	for(c=0;c<b;c++)
	{
		for(d=0;d<b;d++)
		{
			scanf("%d",&a[c][d]);
		}
	}
	for(e=0;e<b;e++)
	{
		for(f=0;f<b;f++)
		{
			if (a[e][f]==0) g=g+1;
		}
	}
	h=(g/4-1)*(g/4-1);
	printf("%d",h);
}