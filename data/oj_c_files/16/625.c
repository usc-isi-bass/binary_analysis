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
	int n,i;
	scanf("%d",&n);
	if(n/10000!=0)
	printf("00001");
	else if(n/1000!=0)
	{
		int a,b,c,d;
		a=n/1000;
		b=(n-1000*a)/100;
		c=(n-1000*a-100*b)/10;
		d=n%10;
		printf("%d%d%d%d",d,c,b,a);
	}
	else if(n/100!=0)
	{
		int e,f,g;
		e=n/100;
		f=(n-100*e)/10;
		g=n%10;
		printf("%d%d%d",g,f,e);
	}
	else if(n/10!=0)
	{
		int p,q;
		p=n/10;
		q=n%10;
		printf("%d%d",q,p);
	}
	else
	printf("%d",n);
	return 0;
	
}