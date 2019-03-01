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
	int i=0,j=0,x[1000]={0},y[1000]={0},n=0,k,min=1000,max=0,m=0,l;
	char a;
	while(1)
	{
		scanf("%d",&x[i]);
		i++;
		a=getchar();
		if(a=='\n')
			break;
	}

	while(1)
	{
		scanf("%d",&y[j]);
		j++;
		a=getchar();
		if(a=='\n')
			break;
	}
	for(k=0;k<i;k++)
		if(x[k]<min)
			min=x[k];
	for(k=0;k<j;k++)
		if(y[k]>max)
			max=y[k];
	for(k=min;k<max;k++)
	{
		n=0;
		for(l=0;l<i;l++)
		{
			if(x[l]<=k&&y[l]>k)
				n++;
		}
		if(n>m)
			m=n;
	}
	printf("%d %d",i,m);


}
