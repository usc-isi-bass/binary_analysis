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
	int x[1001],y[1001];
	int i,j,n,s=0,max=0;
	char c;
	for(i=0;;i++)
	{
		scanf("%d",&x[i]);
		if((c=getchar())=='\n')
			break;
	}
	for(i=0;;i++)
	{
		scanf("%d",&y[i]);
		if((c=getchar())=='\n')
		{
			n=(i+1);
			break;
		}
	}
	for(j=0;j<=1000;j++)
	{
		for(i=0;i<=(n-1);i++)
		{
			if((x[i]<=j)&&(y[i]>j))
				s++;
		}
		if(s>max)
			max=s;
			s=0;
	}
	printf("%d %d\n",n,max);
	return 0;
}