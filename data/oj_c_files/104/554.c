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

void change(int a[10000])
{
	int i;
	for(i=1;i<10000&&a[i-1]!=1;i++)
	{
		a[i]=(int)(a[i-1]/2);
	}
}
main()
{
	int i,j,x,y,a[10],b[10];
	scanf("%d%d",&x,&y);
	a[0]=x;b[0]=y;
	change(a);change(b);
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{if(a[i]==b[j]){printf("%d\n",a[i]);return 0;}
		}
	}
}
