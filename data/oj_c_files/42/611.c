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
long int k,i,j,n,a[100000],m=0;
long int *p=a,*px; 
scanf("%ld\n",&n);
for(i=0;i<n;i++)scanf("%ld",p++);
scanf("\n%ld\n",&k);
for(p=a;p<a+n;p++)
{
	if(*p==k&&p<a+n-1)
	{
		m++;
		for(px=p;px<a+n;px++)*px=*(px+1);
		p--;
	}
	else if(*p==k&&p==a+n-1)
	{*p=0;
	m++;
	}
}
for(p=a;p<a+n-m-1;p++)printf("%ld ",*p);

printf("%ld\n",*(a+n-m-1));
}