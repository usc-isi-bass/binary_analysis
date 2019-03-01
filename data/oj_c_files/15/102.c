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
	int n,i,j;
	int count=0;
	int s=0;
	scanf("%d",&n);
	for (j=0;j<(n*n);j++)
	{
		scanf("%d",&i);
		if (i==0)
			count++;
	}
	count=count/4-1;
    s=count*count;
	printf("%d",s);
	return 0;
}
