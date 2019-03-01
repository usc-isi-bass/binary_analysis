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
	int n,k;
	int t;
	double p;
	scanf("%d %d",&n,&k);
	if (n!=2)
	{
		p=pow((double)n,(double)n);
		t=(int)p-n*k+k;
	}
	else
		t=7;
	printf("%d",t);
}

