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
	int n,m,i,k,j,s,count=0;
	int a[100];
	for(k=0;;k++)
	{
		scanf("%d %d",&n,&m);
		if(n==0)
			break;
		for(s=0,i=2;i<=n;i++)
		{
			s=(s+m)%i;
		}
		a[k]=s+1;
		count++;
	}
	for(j=1;j<=count;j++)
	{
		printf("%d\n",a[j-1]);
	}
}