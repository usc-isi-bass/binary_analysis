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
	int i,k,f[301],n,m;
	scanf("%d%d",&n,&m);
	while (n*m!=0)
	{
		f[1]=0;
		for (i=2;i<=n;i++)
		{
			k=m%i;
			f[i]=(f[i-1]+k)%i;
		}
		printf("%d\n",f[n]+1);
		scanf("%d%d",&n,&m);
	}
}