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
	int a[300],i,j,k,n;
	char c;
	for(i=0;;i++)
	{
		scanf("%d",&a[i]);
		scanf("%c",&c);
		if(c=='\n')
		{
			n=i+1;
			break;
		}
	}
	if(n==1)
		printf("No");
	else
    {
    for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
            {
				k=a[j+1];
				a[j+1]=a[j];
				a[j]=k;
			}
        }
    for(i=n-2;i>=0;i--)
	{
		if(a[i]!=a[n-1])
		{
			printf("%d",a[i]);
			break;
		}
		else
		{
			if(i!=0)
				continue;
			else
				printf("No");
	    }
	}
	}
    return 0;
}