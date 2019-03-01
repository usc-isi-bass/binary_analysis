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

int sushu(int a)
{
	int i;
	int j=0;
	for(i=2;i<=sqrt(a);i++)
	{
		if(a==2)
		{
			break;
		}
		else
		{
			if(a%i==0)
			{
				j=1;
				return(1);
				break;
			}
		}
	}
	if(j==0)
		return(0);
}


int main()
{
	int n;
	scanf("%d",&n);
	int a;
	int x;
	int y;
	for(a=6;a<=n;a++)
	{
		if(a%2==0)
		{
			for(x=3;x<=a/2;x++)
			{
				y=a-x;
				if(sushu(x)==0&&sushu(y)==0)
				{	
					printf("%d=%d+%d\n",a,x,y);
					break;
				}
			}
		}
	}
	return 0;
}
