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
	int i,n;scanf("%d",&n);
	int *p,*hd;hd=p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++,p++)
	{
		scanf("%d",p);
	}
	int max=0;
	for(p=hd,i=0;i<n;i++,p++)
	{
		if(*p>max) max=*p;
	}
	for(p=hd,i=0;i<n;i++,p++)
	{
		if(*p==max) *p=0;
	}
	printf("%d\n",max);max=0;
	for(p=hd,i=0;i<n;i++,p++)
	{
		if(*p>max) max=*p;
	}
	printf("%d",max);
}