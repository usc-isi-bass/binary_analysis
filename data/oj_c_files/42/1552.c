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

void swap(int*,int*);
int main()
{
	int n,k,i,j,js=0;
	int a[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]!=k)
				{
					
					swap(&a[i],&a[j]);
					break;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=k)
		{
			printf("%d",a[i]);
			if(a[i+1]!=k && i!=n-1)
				printf(" ");
		}
	}

	return 0;
}
void swap(int*a,int*b)
{
	int e;
	e=*a;
	*a=*b;
	*b=e;
}