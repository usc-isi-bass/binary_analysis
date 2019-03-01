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

int factoring(int a,int b)
{
    int i,kind=0;
	if(a==1)
	{
	    kind=1;
	}

	else
	{
	    for(i=b;i<=a;i++)
		{
		    if(a%i==0)
			{
	            kind=factoring(a/i,i)+kind;
			}
		}
	}
	return kind;
}

int main()
{
	int n,i,j,a[30000]={0},b[30000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=factoring(a[i],2);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}