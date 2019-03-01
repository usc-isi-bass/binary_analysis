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
	scanf("%d",&n);
	int i;
	int j;
	i=n/100;
	j=n%100;
	n=j;
	printf("%d\n",i);
	i=n/50;
	j=n%50;
	n=j;
	printf("%d\n",i);
	i=n/20;
	j=n%20;
	n=j;
	printf("%d\n",i);
	i=n/10;
	j=n%10;
	n=j;
	printf("%d\n",i);
	i=n/5;
	j=n%5;
	n=j;
	printf("%d\n",i);
	i=n/1;
	j=n%1;
	n=j;
	printf("%d\n",i);
	return 0;
}