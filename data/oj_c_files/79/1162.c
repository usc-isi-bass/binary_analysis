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
	int k,n,m,t,i,j,g[303]={0},count=0;
	while (1)
	{
		cin>>n>>m;
		k=0;
		t=0;
		count=0;
		for (i=1;i<=n;i++)
		{
			g[i]=0;
		}
		if (n==0)
			break;
		while (count<n-1)
		{
			k=k+1;
			if (k==n+1)
			{
				k=1;
			}
			if (g[k]==0&&t!=m)
			{
				
				t=t+1;
			}
			if (g[k]==0&&t==m)
			{
				g[k]=1;
				count=count+1;
				t=0;
			}
		}
		for (j=1;j<=n;j++)
		{
			if (g[j]==0)
				cout<<j<<endl;
		}

	}
	return 0;
}