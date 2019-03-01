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

	int l;
	int r;
	l=n%100;
	r=(n-l)/100;
	printf("%d\n",r);
	n=l;
	l=n%50;
	r=(n-l)/50;
	printf("%d\n",r);
	n=l;
	l=n%20;
	r=(n-l)/20;
	printf("%d\n",r);
	n=l;
	l=n%10;
	r=(n-l)/10;
	printf("%d\n",r);
	n=l;
	l=n%5;
	r=(n-l)/5;
	printf("%d\n",r);
	n=l;
	l=n%1;
	r=(n-l)/1;
	printf("%d",r);





	
	return 0;
}