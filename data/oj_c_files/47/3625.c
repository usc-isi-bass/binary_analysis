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
	int a[100],*p,n,i,j,m,t;
	p=a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&*(p+i));
	m=(n)/2;
    for(i=0;i<m;i++)
	{
		j=n-i-1;
		t=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=t;
	}

	for(i=0;i<n-1;i++)
		printf("%d ",*(p+i));
	printf("%d",*(p+n-1));
}