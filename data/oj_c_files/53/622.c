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
	int a[300]={0},b[300],n,*p,*q,t=0,i,*j;
	scanf("%d",&n);
	for(p=a,i=0;i<n;p++,i++)
		scanf("%d",p);
	j=b;
	p=a;
	*j=*p;
	p++;
    while(*p!=0)
	{
		for(q=b;q<=j-t;q++)
			if(*p==*q)
			{
				t++;
				goto A;
			}
		*(j+1-t)=*p;
A:		j++;
		p++;
	}
	for(q=b;q<j-t;q++)
		printf("%d,",*q);
	printf("%d\n",*(j-t));
}