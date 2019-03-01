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

main()
{
	int i,k,n,a,b,f=-1,c[10000],d[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		c[i]=-1;
		d[i]=0;
	}
	for(;;)
	{
		scanf("%d%d",&a,&b);
		if(a==0&&b==0)break;
		else
		{
			c[a]=0;
			d[b]++;
		} 
	}
	for(i=0;i<n;i++)
	{
		if(c[i]==0)continue;
		if(d[i]==n-1)
		{
			printf("%d",i);
			f=i;
		}
	}
	if(f==-1)printf("NOT FOUND");
}
