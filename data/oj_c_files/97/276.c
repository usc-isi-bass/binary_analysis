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
	int m,a,b,c,d,e,f;
	scanf("%d",&m);
	if(m/100==0)
		printf("0\n");
	else
		printf("%d\n",m/100);
	a=m-100*(m/100);
	if(a/50==0)
		printf("0\n");
	else
		printf("%d\n",a/50);
	b=a-50*(a/50);
	if(b/20==0)
		printf("0\n");
	else
		printf("%d\n",b/20);
	c=b-20*(b/20);
	if(c/10==0)
		printf("0\n");
	else
		printf("%d\n",c/10);
	d=c-10*(c/10);
	if(d/5==0)
		printf("0\n");
	else
		printf("%d\n",d/5);
	e=d-5*(d/5);
	if(e/1==0)
		printf("0\n");
	else
		printf("%d\n",e/1);
	return 0;





}