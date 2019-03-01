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
	int n,i,a[128],*p,*q,t;
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
		scanf("%d",p++);
	p=a;
	q=a+n-1;
	for(i=0;i<=n/2-1;i++)
	{
		t=*(p+i);
		*(p+i)=*(q-i);
		*(q-i)=t;
	}
	p=a;
	printf("%d",*p);
	p=a+1;
	for(i=1;i<n;i++)
	    printf(" %d",*(p++));
}