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
	int m,n,an;
	scanf("%d %d",&m,&n);
	an=f(m,n);
	printf("%d",an);

}
int f(int a,int b)
{
	int w;
	if(a==b)
		w=a;
	if(a>b)
		w=f(a/2,b);
	if(a<b)
		w=f(a,b/2);
	return w;

}
