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
	int a[16];
    int i,x,y,s,num=0;
	for(;;)
	{num=0;
    for(i=0;i<16;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		{break;}
	}
	if(a[0]==-1)
	{break;}
	if(a[0]==0)
	{printf("%d",num);}
	for(x=0;x<i;x++)
	{
		for(y=0;y<i;y++)
		{
			s=a[x]-a[y]-a[y];
			if(s==0)
			{num++;}
		}
	}
	printf("%d\n",num);}
	return 0;
}

