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
	int a[10000]={0},b[10000]={0},i,j,x,y,t;
	scanf("%d%d",&x,&y);
	if(x==y) printf("%d",x);
	else{
	if(x>y)
	{
		t=x;
		x=y;
		y=t;
	}
	for(i=0;;i++)
	{
		a[i]=x;
		x=x/2;
		if (a[i]==0) break;
	}
	for(i=0;;i++)
	{
		b[i]=y;
		y=y/2;
		if (b[i]==0) break;
	}
	for(i=0;;i++)
	{
		for(j=0;;j++)
		{
			if(a[i]==b[j]) break;
			if(b[j]==0) break;
		}
		if(a[i]==b[j]) break;
	}
	printf("%d",a[i]);
	}
	return 0;
}

