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

int su(int m);
void main()
{
	long n, p, i;
	scanf("%ld", &n);
	for(i=6; i<=n; i=i+2)
	{
		for(p=2;p<i;p++)
			if(su(p)&&su(i-p)&&p<=i-p) break;
		printf("%ld=%ld+%ld\n", i, p, i-p);
	}
}
int su(int m)
{
	int j, k;
	k=sqrt(m);
	for(j=2;j<=k;j++)
		if(m%j==0)
			return(0);
		return(m);
}