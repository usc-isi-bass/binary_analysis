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
	int i,n,j=0,m=1,k;
	int a[100],b[100];
	int *p1,*p2;
	p2=b;p1=a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	*p2=*p1;
	for(i=1;i<n;i++)
	{
		j=0;
		for(k=0;k<i;k++)
		{
			if(*(p1+i)!=*(p1+k))j++;
		}
		if(j==i)
		{
			*(p2+m)=*(p1+i);m++;
		}
	}
	for(i=0;i<m-1;i++)
	printf("%d,",*(p2+i));
	printf("%d",*(p2+m-1));
}