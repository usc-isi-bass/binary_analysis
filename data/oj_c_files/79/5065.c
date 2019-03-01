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
	int n,m,i,k,a[301],b;
	while(1)
	{
		scanf("%d %d",&n,&m);
		k=1;
		if(n==0&&m==0) break;
		for(i=1;i<=n;i++) a[i]=i;
		for(i=0;i<=n-2;i++)
		{
			k=(m+k-1)%(n-i);
			if(k==0) k=n-i;
			else for(b=k;b<=n-i-1;b++) a[b]=a[b+1];
		}
		printf("%d\n",a[1]);
	}
}