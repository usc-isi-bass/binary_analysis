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
	int x[1000], y[1000], i, j=0;
	scanf("%d%d", &x[0], &y[0]);
	while(y[j]!=1)
	{
        j=j+1;
		y[j]=y[j-1]/2;
	}
	j=0;i=0;
	while (x[i]<y[j]) j++;
	while (x[i]!=y[j])
	{
		i=i+1;
		x[i]=x[i-1]/2;
        while (x[i]<y[j]) j++;
	}
    printf("%d\n",x[i]);
	return 0;
}