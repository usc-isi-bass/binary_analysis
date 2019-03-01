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

void main()
{
	int num,h[27]={100000000},lj[27][27]={0};//lj[ex-turn][turn]
	int i,j,k,max;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
		scanf("%d",&h[i]);
	for(i=num;i>=0;i--)//exturn
	{
		for(j=num;j>i;j--)//turn
		{
			if(h[i]>=h[j])
			{
				max=0;
				for(k=j;k<=num;k++)//???j?
					max=(max>lj[i][k])?max:lj[i][k];
				for(k=j;k<=num;k++)//???
					if(h[j]>=h[k])
						max=(max>lj[j][k]+1)?max:lj[j][k]+1;
				lj[i][j]=max;
			}
		}
	}
	printf("%d\n",lj[0][1]);		
}