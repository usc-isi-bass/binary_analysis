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
	int num,i,j,k,r;
	int flag[SIZE];
	for(i=0;i<30000;i++)
	{
		for(j=2;j<=sqrt(i);j++)
		{
			r=i%j;
			if(r==0)
			{
				flag[i]=0;
				break;
			}
		}
		if(r!=0)
		{
			flag[i]=1;
		}
	}
	scanf("%d",&num);
	if(num<5)
	{
		printf("empty");
	}
	else
	{
		for(k=3;k<num-1;k++)
		{
			if(flag[k]==1&&flag[k+2]==1)
			{
				printf("%d %d\n",k,k+2);
			}
		}
	}
	return 0;
}