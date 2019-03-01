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
	int i,n,a=0,b=0,c=0,d=0,e=0,f=0;
	scanf("%d",&n);
	for(i=n;i>=100;i=i-100)
		a++;
	for(i;i>=50;i=i-50)
		b++;
	for(i;i>=20;i=i-20)
		c++;
	for(i;i>=10;i=i-10)
		d++;
	for(i;i>=5;i=i-5)
		e++;
	f=i;
	printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f);
	return 0;
}