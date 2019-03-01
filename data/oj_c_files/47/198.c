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
    int n,a[100],i,*p,tem;
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	for(i=0;i<n/2;i++)
	{
		tem=*(p+i);
		*(p+i)=*(p+n-1-i);
		*(p+n-1-i)=tem;
	}
     for(p=a;p<a+n;p++)
		 printf("%d%s",*p,p==a+n-1?"":" ");
}

