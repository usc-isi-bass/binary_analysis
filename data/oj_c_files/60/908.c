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
	int n,i,j,k=1,m=1,t,s[10000],g[10000][2];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				t=1;
				break;
			}
		}
		if(t==0)
		{
			s[k]=i;
			k++;
		}
	}
	for(i=1;i<k-1;i++)
	{
		if(s[i+1]-s[i]==2)
		{
			g[m][1]=s[i];
			g[m][2]=s[i+1];
			m++;
		}
	}
	if(m==1)
	{
		printf("empty");
	}
	else
	{
	    for(i=1;i<m;i++)
		{
		    printf("%d %d\n",g[i][1],g[i][2]);
		}
	}
	return 0;
}
