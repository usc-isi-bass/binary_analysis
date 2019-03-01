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
	int a[100],n,i,*j,*k,*p,temp,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",a+i);
    m=(n-1)/2;
	j=a;k=a+n-1;p=a+m;
	for(;j<=p;j++,k--)
	{temp=*j;
	*j=*k;
	*k=temp;
	}
    for(i=0;i<n-1;i++)
	printf("%d ",*(a+i));
    printf("%d",*(a+n-1));
}