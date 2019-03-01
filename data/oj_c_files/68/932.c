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

int issushu(int a)
{
	int i,sqrta;
	if(a%2==0)
	{
		return 0;
	}
	sqrta=(int)sqrt(a);
	for(i=3;i<=sqrta;i++)
	{
		if(a%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main(int argc, char* argv[])
{
	int n,i,j;
	scanf("%d",&n);
	for(j=3;j<=n;j++)
	{
		if(j%2==0)
		{
			
			for(i=2;i<=(j/2);i++)
			{
				if(issushu(i)&&issushu(j-i))
				{
					printf("%d=%d+%d\n",j,i,j-i);
					break;
				}
			}
		}
	}
		
		
	return 0;
}