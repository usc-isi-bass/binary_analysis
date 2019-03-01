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
	int a[LEN]={0};
	int n,i,j,p,q,min,max,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&p,&q);
		for(j=p;j<q;j++)
			a[j]=1;
	}
	for(i=0;i<LEN;i++)
	{
		s+=a[i];
	}
	for(i=0;i<LEN;i++)
	{
		if(a[i]==1)
		{
			min=i;
			break;
		}
	}
	for(i=min;i<LEN;i++)
	{
		if(a[i]==0)
		{
			max=i-1;
			break;
		}
	}
	if(max-min+1==s)
		printf("%d %d\n",min,max+1);
	else
		printf("no");
	return 0;
}

