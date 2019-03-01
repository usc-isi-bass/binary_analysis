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
	char x[500],b,g;
	int y[500],i,j,n,a;
	gets(x);
	n=strlen(x);
	a=n;
	for(i=0;i<n;i++) y[i]=1;
	b=x[0];g=x[n-1];
	for (i=0;i<n&&a!=0;i++)
	{
		if (x[i]==b&&y[i])
		{
			for(j=1;y[i+j]==0;j++){}
			if (x[i+j]==g) 
			{
				y[i]=0;y[i+j]=0;
				printf("%d %d\n",i,i+j);
				i=-1;j=0;
				a-=2;
			}
		}
	}
}
