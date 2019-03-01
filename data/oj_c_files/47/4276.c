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
	int i, a[100],*p,*p1=NULL,temp,n,s;
	p=a;
	scanf("%d",&n);
    for(;p<n+a;p++)
		scanf("%d",p);
	p=a;
	p1=a+n-1;s=n/2;
	for(i=0;i<s;i++)
	{
		temp=*p;
		*p=*p1;
		*p1=temp;
		p++;
		p1--;
	}
	p=a;
	for(;p<n+a-1;p++)
		printf("%d ",*p);printf("%d",*p);
}
