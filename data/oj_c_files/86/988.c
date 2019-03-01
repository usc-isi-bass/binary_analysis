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
	int n,m[100],sz[100][60],i,j;
	int time,num,z;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		num=0;
		z=0;
		scanf("%d",&m[i]);
		for(j=0;j<m[i];j++)
		{
			scanf("%d",&sz[i][j]);
		}
		for(time=1;time<=60;time++)
		{
			num++;
			if(num==sz[i][z])
			{
				z++;
				if(time<57)
				{
					num=num-3;
				}
				else
				{
					break;
				}
			}
		}
		printf("%d\n",num);
	}
	return 0;
}