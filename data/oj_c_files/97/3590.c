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
	int q,a=0,b=0,c=0,d=0,e=0,f=0;
	scanf("%d",&q);
	a=q/100;
	if ((q-a*100)>=50)
		b=1;
	q=q-a*100-b*50;
	if (q>=20)
		c=q/20;
	q=q-20*c;
	if (q>=10)
		d=q/10;
	q=q-10*d;
	if (q>=5)
		e=q/5;
	q=q-5*e;
	f=q;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;
}