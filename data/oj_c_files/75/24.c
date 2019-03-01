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
	int x[1000]={0},y[1000]={0},t[1000]={0},n=0,i,j,k=1,max;
	char c;
	while((c=getchar())!='\n')
	{
		if(c>='0'&&c<='9')
			n=n*10+c-'0';
		else
		{
			x[k]=n;
			k++;
			n=0;
		}
	}
	x[k]=n;
	n=0;
	k=1;
	while((c=getchar())!='\n')
	{
		if(c>='0'&&c<='9')
			n=n*10+c-'0';
		else
		{
			y[k]=n;
			k++;
			n=0;
		}
	}
	y[k]=n;
	for(i=1;i<=k;i++)
	{
		for(j=x[i];j<y[i];j++)
			t[j]++;
	}
	max=t[0];
	for(i=1;i<999;i++)
	{
		if(t[i]>max)
			max=t[i];
	}
	printf("%d %d\n",k,max);
	return 0;
}
