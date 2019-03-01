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
	int n,i,j,k,l,m;
	int a[500],b[500];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n");
	for(i=0,j=0,k=0;i<n;i++)
	{if(a[i]%2==1)
	{b[j]=a[i];
	j++;
	k++;
	}
	}
	for(j=0;j<k;j++)
	{for(l=j+1;l<k;l++)
	{
	if(b[l]<b[j])
	{m=b[l];b[l]=b[j];b[j]=m;}
	}
	if(j==0)
		printf("%d",b[j]);
	else
	printf(",%d",b[j]);
	}
	printf("\n");
	return 0;
}