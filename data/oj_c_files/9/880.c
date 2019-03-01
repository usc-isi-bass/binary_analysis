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
	int n;
	int i,j;
	scanf("%d",&n);
	char bh[999][999];
	int nl[999];
	for(i=1;i<=n;i++)
	{
		scanf("%s %d",bh[i],&nl[i]);
	}
	int pd[999],k=0;
	for(i=1;i<=n;i++)
	{
		if(nl[i]>=60)
		{
			k++;
			pd[k]=i;
		}
	}
	int e;
	for(i=1;i<k;i++)
	{
		for(j=1;j<=k-i;j++)
		{
			if (nl[pd[j]]<nl[pd[j+1]])
			{
				e=pd[j+1];
				pd[j+1]=pd[j];
				pd[j]=e;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		if(nl[i]<60)
		{
			k++;
			pd[k]=i;
		}
	}
	for(i=1;i<=k;i++)
	{
		printf("%s\n",bh[pd[i]]);
	}
	return 0;
}