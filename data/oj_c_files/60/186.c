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
	int n,a[10000],m=1,i,j,t,k=1;
	scanf("%d",&n);
	for(i=3;i<=n;i++)
	{
		t=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				t++;
				break;
			}
			else
				continue;
		}
		if(t==0)
		{
			a[m]=i;
			m++;
		}
		else
			continue;
	}
	for(i=1;i<m;i++)
	{
		if(a[i]==a[i+1]-2)
		{
			printf("%d %d\n",a[i],a[i+1]);
			k++;
		}
		else
			continue;
	}
	if(k==1)
		printf("empty\n");
}
