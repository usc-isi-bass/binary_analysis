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
	int n,k,i,j,g;
	int a[1000];
	scanf("%d%d",&n,&k);
	g=0;
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if((a[i]+a[j])==k)
			{
				g=1;
				break;
			}
		}
		if(g==1) break;
	}
	if(g==1) printf("yes");
	else printf("no");
	return 0;
}