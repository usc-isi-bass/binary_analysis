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
	int a[10000],b[10000];
	int i,n,j,k,p,q;
	int flag=0;
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		a[k]=0;
		b[k]=0;
	}

	for(q=0;;q++)
	{
		scanf("%d %d",&i,&j);
		if(i==0&&j==0)
			break;
		else
		{
			a[i]++;
			b[j]++;
		}
	}
	for(p=0;p<n;p++)
	{
		if((a[p]==0)&&(b[p]==n-1))
		{
			flag=1;
			printf("%d\n",p);
		}
	}
	if(flag==0)
		printf("NOT FOUND");
	return 0;
	
}