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
	int n,i,j,k=0,flag,a[20000],b[20000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		flag=1;
	    for(j=0;j<i;j++)
		{if(a[i]==a[j])
	    flag=0;}
	    if(flag==1)
		{b[k]=a[i];
		k++;}
	}
	for(i=0;i<k-1;i++)
		printf("%d ",b[i]);
	printf("%d\n",b[i]);
}

