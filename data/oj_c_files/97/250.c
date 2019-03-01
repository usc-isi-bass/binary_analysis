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
    int n,a,b;
	int s[7]={0};
	scanf("%d", &n);
	b=n/100;
	printf("%d\n", b);
	a=(b==0) ? n:(n%100);
	b=a/50;
	printf("%d\n", b);
	a=(b==0) ? a:(a%50);
	b=a/20;
	printf("%d\n", b);
	a=(b==0) ? a:(a%20);
	b=a/10;
	printf("%d\n", b);
	a=(b==0) ? a:(a%10);
	b=a/5;
	printf("%d\n", b);
	a=(b==0) ? a:(a%5);
	printf("%d\n", a);
	return 0;
}
