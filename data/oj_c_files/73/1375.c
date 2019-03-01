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
	int f[5][5];
	int a,b,c,d,i,j;
	c=0;
	d=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&f[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			for(a=0;a<5;a++)
			{
				for(b=0;b<5;b++)
				{
					if(f[i][j]>=f[i][a]&&f[i][j]<=f[b][j])
			{
				c++;
				if(c==25)
			{
				d=1;
				printf("%d %d %d",i+1,j+1,f[i][j]);
				break;
			}
			}
					else
					{
						c=0;
					}
				}
			}
		}
	}
	if(d==0)
		printf("not found");
	return 0;
}
