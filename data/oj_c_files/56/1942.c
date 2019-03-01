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
	int n,i=0,j=0;
	int a[5];
	scanf("%d",&n);
	while(n!=0)
	{
		a[i]=n%10;
		n=n/10;
		i=i+1;
	}
	while(j<i)
	{
		n=10*n+a[j];
		j=j+1;
	}
	printf("%d",n);
}

