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
	int a[10]={0};
	int	i=1;
	int j=1;
	int b;
	scanf("%d",&b);
	while (b>9)
	{
		a[i]=b%10;
		b=b/10;
	    i=i+1;
    }
	a[i]=b;
	for(j=1;j<(i+1);j++)
	{
		printf("%d",a[j]);
    }
}