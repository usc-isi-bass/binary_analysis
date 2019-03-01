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

change(int *p,int *q,int n)
{
	int t;
	for(;p<=q;p++,q--)
	{
		t=*p;
		*p=*q;
		*q=t;
	}	
		 return;
}
void main()
{
	int n,a[1000],*p,i,*q;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=a;
	q=a+n-1;
   change(p,q,n);
	 for(i=0;i<n-1;i++)
		 printf("%d ",*(p+i));
	 printf("%d",*(p+i));
}