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

int main(){
	int n,k,i,a,l,j,h=0;
	int sz[1000];
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		sz[i-1]=a;
	}
    for(i=0;i<n;i++)
	{
        for(j=1;j<=n;j++)
		{
			l=sz[i]+sz[j];
			if(l==k)
			{
				h=1;
				break;
			};
		};
	}
	if(h==1)
	{ printf("yes");}
	else
	{printf("no");}
	return 0;
}