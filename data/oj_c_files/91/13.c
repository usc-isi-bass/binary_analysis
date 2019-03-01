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
	char a[100],b[100],*p,*q;
	int sum=0,n;
	gets(a);
	n=strlen(a);
	for(p=a,q=b;p<a+n-1;p++,q++)
	{
		*q=*p+*(p+1);
		sum++;
	}
	*q=*p+*a;
	sum++;
	for(q=b;q<b+sum;q++)
	{
		printf("%c",*q);
	}
   return 0;
}

	