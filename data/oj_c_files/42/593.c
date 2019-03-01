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
	int i,n,j,k,a[100000],*p;
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
		scanf("%d",p++);
	scanf("%d",&k);
	p=a;
    for(i=0;i<n;i++)
	{
			if(*(p+i)==k)
			{
				n--;
				for(j=i;j<n;j++)
	             *(p+j)=*(p+j+1);
				i--;
			}
	}
    for(i=0;i<n-1;i++)
            printf("%d ",*p++);
    p=a;
	printf("%d",*(p+n-1));
}