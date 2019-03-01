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
	int f(int a,int b);
	int n,a,b;
	scanf("%d",&n);
	for(;n-->0;)
		{scanf("%d%d",&a,&b);
	printf("%d\n",f(a,b));}
}
int f(int a,int b)
{
	if(a>0&&b>1)return(f(a,b-1)+f(a-b,b));
	else if(a<0||b<=0)return (0);
	else return(1);
}
	