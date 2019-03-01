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
	int n,i,j,k;
	char a[1000][50];
	int b[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		b[i]=strlen(a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(b[j]>b[j+1])
			{
				k=b[j];
				b[j]=b[j+1];
				b[j+1]=k;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		k=strlen(a[i]);
		if(k==b[n-1]){printf("%s\n",a[i]);break;}
	}
	for(i=0;i<n;i++)
	{
		k=strlen(a[i]);
		if(k==b[0]){printf("%s",a[i]);break;}
	}
}
