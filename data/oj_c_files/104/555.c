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
	int x, y;
	scanf("%d%d",&x,&y);
	int xroute[20],yroute[20];
	xroute[0]=x;
	yroute[0]=y;
	int i, j, a, b;
	for(i=1; i<20; i++)
	{
		if(xroute[i-1]==1) break;
		if(xroute[i-1]%2==0) xroute[i]=xroute[i-1]/2;
		else xroute[i]=(xroute[i-1]-1)/2;
	}
	a=i-1;
	for(i=1; i<20; i++)
	{
		if(yroute[i-1]==1) break;
		if(yroute[i-1]%2==0) yroute[i]=yroute[i-1]/2;
		else yroute[i]=(yroute[i-1]-1)/2;
	}
	b=i-1;
	for(i=0; i<=a; i++)
	{
		for(j=0; j<=b; j++)
		{
			if(xroute[i]==yroute[j]) 
			{
				printf("%d\n",xroute[i]);
				return 1;
			}
		}
	}
	return 0;
}