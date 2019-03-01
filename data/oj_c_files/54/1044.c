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
	int p(int a);
	double n,k;
	int o;
	scanf("%lf %lf",&n,&k);
	o=-k*(n-1)+pow(n,n);
	p(o);
}

int p(int a)
{
	printf("%d",a);
}

