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
	int m,i,j,flag,t;
	scanf("%d",&m);
	for(i=3;i<=m/2;i++)
	{
		flag=1;
		for(j=2;j<i;j++)
		{
			if(i%j!=0)
				flag*=1;
			else
				flag*=0;
		}
		if(flag==1)
		{
			t=m-i;
			flag=1;
			for(j=2;j<m-i;j++)
			{
				if((m-i)%j!=0)
					flag*=1;
				else
					flag*=0;
			}
			if(flag==1)
				printf("%d %d\n",i,m-i);
		}
	}
	return 0;
}



