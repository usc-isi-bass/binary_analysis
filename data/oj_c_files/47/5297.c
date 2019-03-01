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
	int a[1000],*p,n,i,t;
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++,p++)
		scanf("%d",p);
	for(i=n-1;i>0;i--)
		printf("%d ",*(p+i-n));
	printf("%d",*(p-n));
}


 

 