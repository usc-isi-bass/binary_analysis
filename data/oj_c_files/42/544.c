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
	int a[100000];
	int n,i,k,num=0;
	int *p=a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	scanf("%d",&k);
	for(i=0;i<n-num;i++)
	{
		if(*(p+i)==k)
		{
			int *j=p+i;
			for(;j<a+n-num;j++)
			{
				*j=*(j+1);
			}
			i--;
			num++;
		}
	}
	for(i=0;i<n-num-1;i++)
	{
		printf("%d ",*(p+i));
	}
printf("%d",*(p+n-num-1));
	return 0;
}