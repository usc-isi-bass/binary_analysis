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
	int i,n,a[500],b[500],k=0,j,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==1)
		{
			b[k]=a[i];
			k++;
		}
	}
	for(i=0;i<k-1;i++)
		for(j=0;j<k-1;j++)
		{
			if(b[j]>b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	for(i=0;;i++)
	{
		printf("%d",b[i]);
		if(i<k-1)
			printf(",");
		else
			break;
	}
	return 0;
}