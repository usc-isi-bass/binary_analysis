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
	int x,y,i,j,s,t,v=0;
	int a[1000],b[1000];
	scanf("%d%d",&x,&y);
	for(i=0;x!=0;i++)
	{
		a[i]=x;
		x=x/2;
	}
	s=i;
	for(i=0;y!=0;i++)
	{
		b[i]=y;
		y=y/2;
	}
	t=i;
	for(i=0;i<s;i++)
	{
		for(j=0;j<t;j++)
		{
			if(a[i]==b[j])
			{
                v=1;
				break;
			}
		}
		if(v==1)
		{
			printf("%d",a[i]);
			break;
		}

	}
	return 0;
}
	