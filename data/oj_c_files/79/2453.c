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
	int a[301],n,m;
	while(1)
	{
		int i,j=0,k=0;
	cin>>n>>m;
	if(n==0)
		break;
	for(i=1;i<=n;i++)
	    a[i]=1;
	for(i=1;i<=n;i++)
	{
			j=j+a[i];
			if(j==m)
			{
				a[i]=0;
				j=0;
				k++;
			}
		if(k==n)
		{
			cout<<i<<endl;
			break;
		}
		if(i==n)
			i=0;
	}
	}
	return 0;
}
