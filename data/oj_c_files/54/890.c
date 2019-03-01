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
	int f();
	int n,k,m;
	scanf("%d %d",&n,&k);
	m=f(n,k);
	printf("%d",m);
}
int f(int n,int k)
{
	int c;
	c=pow(n,n)-k*(n-1);
	return(c);
}