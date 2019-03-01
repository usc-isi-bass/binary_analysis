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
	int x[1000], y[1000], i, j, temp;
	scanf("%d%d", &x[0], &y[0]);
	if(x[0]>y[0])
	{
		temp=x[0];
		x[0]=y[0];
		y[0]=temp;
	}
	i=0;
	while(x[i]!=1)
	{
		i++;
		x[i]=x[i-1]/2;
	}
	i=0; j=0;
	while(y[j]!=x[i])
	{
       j++;
	   y[j]=y[j-1]/2;
	   if(y[j]<x[i]) i++;
	}
	printf("%d\n", x[i]);
	return 0;
}