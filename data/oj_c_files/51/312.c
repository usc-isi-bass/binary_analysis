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
	char a[501],b[500][5];

	int i,n,k=0,m,j,count[500]={0},mark[500]={0},max=1;
	scanf("%d\n",&m);
	gets(a);
	n=strlen(a);
	for(i=0;i<n-m+1;i++)
	{
		for(j=0;j<m;j++)
		{
			b[i][j]=a[i+j];
		}
		b[i][j]=0;
	}
	for(i=0;i<n-m+1;i++)
	{
		count[i]=1;
		for(j=i+1;j<n-m+1;j++)
		{
			if(strcmp(b[i],b[j])==0)
				count[i]++;
		}
	}
	for(i=0;i<n-m+1;i++)
	{
		if(count[i]==max&&max!=1)
		{
			mark[k]=i;
			k++;
		}
		else if(count[i]>max)
		{
			max=count[i];
			k=0;
			mark[k]=i;
			k++;
		}
	}
	if(max==1)
		printf("NO");
	else
	{
		printf("%d",max);
		for(i=0;i<k;i++)
		{
			printf("\n%s",b[mark[i]]);
		}
	}

	return 0;
}