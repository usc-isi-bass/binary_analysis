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


void gujiao(int x)
{
	if(x%2) 
	{
		printf("%d*3+1=%d\n",x,x*3+1);
		x=x*3+1;
	}
	else
	{
		printf("%d/2=%d\n",x,x/2);
		x=x/2;
	}
	if(x==1) printf("End");
	else gujiao(x);
}

int main()
{
	int n,i;
	scanf("%d",&n);
	if(n==1) {printf("End");return 0;}
	else gujiao(n);
	return 0;
}
