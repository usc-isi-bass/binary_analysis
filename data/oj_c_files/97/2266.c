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
	int n,a,b,c,d,e,f;
	scanf("%d",&n);
	for(a=0;n>=100;a++)
		n=n-100;
	for(b=0;n>=50;b++)
		n=n-50;
    for(c=0;n>=20;c++)
		n=n-20;
	for(d=0;n>=10;d++)
		n=n-10;
	for(e=0;n>=5;e++)
		n=n-5;
	f=n;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
}