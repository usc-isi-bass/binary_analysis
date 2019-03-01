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
	int i,j,x[10],y[10],a,b;
	scanf("%d%d",&a,&b);
    for (i=9;;i--)
	{
		x[i]=a;a/=2;
		if (x[i]==1) break;
	}
	for (j=i;j<10;j++) x[j-i]=x[j];
	for (i=9;;i--)
	{
		y[i]=b;b/=2;
		if (y[i]==1) break;
	}
	for (j=i;j<10;j++) y[j-i]=y[j];
	for (i=0;;i++)
	{
		if (x[i]!=y[i]) 
		{
			printf("%d",x[i-1]);
			break;
		}
	}
}