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
	int a[100000];
	int n,i,j=0,k;
	int *p;
	scanf("%d",&n);
	for(i=0,p=&a[0];i<n;i++)scanf("%d",&*(p+i));
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(*(p+i)!=k)
		{
			*(p+j)=*(p+i);
			j++;
		}
	}
	for(i=0;i<j-1;i++)printf("%d ",*(p+i));
	printf("%d\n",*(p+i));
}