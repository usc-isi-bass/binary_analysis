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

int main(void)
{
	int map[5][5],max[5],t,i,j,t_max;
	char b=1;
	for(i=0;i<5;i++)
	{
		t_max=0;
		for(j=0;j<5;j++)
		{
			scanf("%d ",&t);
			map[i][j]=t;
			if(t_max<t)
			{
				max[i]=j;
				t_max=t;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(map[j][max[i]]<map[i][max[i]])
				break;
		}
		if(j==5)
		{
			printf("%d %d %d\n",i+1,max[i]+1,map[i][max[i]]);
			b=0;
		}
	}
	if(b)
		printf("not found\n");
	return 0;
}