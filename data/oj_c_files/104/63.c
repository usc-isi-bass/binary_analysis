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
	int i,j=0,k=0,x[20],y[20];
	scanf("%d%d",&x[0],&y[0]);
	for(i=0;x[i]!=1;i++)
	{
		x[i+1]=x[i]/2;
		k=i+1;
	}
	for(i=0;y[i]!=1;i++)
	{
		y[i+1]=y[i]/2;
		j=i+1;
	}
	for(;x[k]==y[j]&&k>=0&&j>=0;)
	{
		k--;
		j--;
	}
		printf("%d",x[k+1]);
}
