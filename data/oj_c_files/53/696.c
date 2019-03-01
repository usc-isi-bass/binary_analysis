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
	int n,*a,i,j,*p,t=0;
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	p=a;
    for(i=0;i<n;i++)
	{
		scanf("%d",p);
		for(j=0;j<i-t;j++)
			if(*p==a[j]) break;
			if(j!=i-t) {t++;continue;}
		p++;
	}
	p=a;
	for(i=0;i<n-t;i++)
	{
		printf("%d",*p++);
		if(i!=n-t-1) printf(",");
	}
}