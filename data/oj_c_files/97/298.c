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


int main(int argc, char* argv[])
{
	int n,a,b,c,d,e,f,p,q,s,t,u;
	scanf("%d",&n);
	a=n/100;
	p=n-a*100;
	b=p/50;
	q=p-b*50;
	c=q/20;
	s=q-c*20;
	d=s/10;
	t=s-d*10;
	e=t/5;
	u=t-e*5;
	f=u;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;
}

