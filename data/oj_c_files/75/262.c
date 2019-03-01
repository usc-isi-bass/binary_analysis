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
	int x[1100],y[1100],i,n=0,max=0,min=1000,j,most=0,p;
	char b;
	do
	{
		scanf("%d",&x[n]);
		b=getchar();
		n++;
	}
	while(b==',');
	n=0;
    do
	{
		scanf("%d",&y[n]);
		b=getchar();
		n++;
	}
	while(b==',');
	printf("%d ",n);
	for(i=0;i<n;i++)
	{
		if(x[i]<min) min=x[i];
		if(y[i]>max) max=y[i];
	}

	for(i=min;i<max;i++)
	{
		p=0;
		for(j=0;j<n;j++)
			if(x[j]<=i&&y[j]>i) p++;
		if(p>most) most=p;
	}
	printf("%d\n",most);


}
