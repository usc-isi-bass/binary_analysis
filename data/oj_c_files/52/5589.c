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

int main()
{
	int n,m,i,j;
	int a[100],c;
	int *b;
	scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	b=a+m;
	for(i=0;i<m;i++)
	{
		c=a[n-1];b=&a[n-1];
		for(j=n-1;j>0;j--)
		{
			*b=*(b-1);
            b=b-1;
		}
		a[0]=c;
	}
	for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
	printf("%d",a[n-1]);

}