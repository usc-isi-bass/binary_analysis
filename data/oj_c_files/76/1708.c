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
	int i,e,d,n,ma,mi;
	int a[N],b[N],c[N]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&(a[i]),&(b[i]));
		d=a[i];
		e=b[i];
		for(;d<e;d++)
		{
			if(c[d]==0)
				c[d]=1;
		}
	}
	mi=a[0];
	ma=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<mi)
			mi=a[i];
		if(b[i]>ma)
			ma=b[i];
	}
	for(i=mi;i<ma;i++)
	{
		if(c[i]==0)
		{
			printf("no");
			return 0;
		}
	}
	printf("%d %d",mi,ma);
	return 0;
}