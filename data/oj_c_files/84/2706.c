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
	char n,i;
	int a[N],*p,max,*pmax;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	max=a[0];
	for(p=a;p<a+n;p++)
		if(max<*p)
			max=*p;
	printf("%d\n",max);
	if(max!=a[0])
		pmax=a;
	else
		pmax=a+1;
	for(p=a;p<a+n;p++)
		if(*pmax<*p&&*p<max)
			pmax=p;
	printf("%d",*pmax);
}