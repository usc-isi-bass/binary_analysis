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

void f(int n,int w)
{
	int x;
	x=(int)pow(10,w-1);
	if (w!=1) f(n%x,w-1);
	printf("%d",n/x);
}
int main()
{
	int n;
	scanf("%d",&n);
	int w=(int)(log(n)/log(10))+1;
	f(n,w);
}
