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
	int reverse(int num);
	int i,num,jieguo;
	for(i=1;i<=6;i++)
	{
		scanf("%d",&num);
		jieguo=reverse(num);
		printf("%d\n",jieguo);
	}
	return 0;
}

int reverse(int num)
{
	int a[10000],i=0,j,m=1,M=0;
	if(num<0)
	{
		num=-num;
		while(num>0)
		{
			a[i]=num%10;
			num=num/10;
			i++;
		}
		for(j=0;j<i;j++)
		{
			M=M+a[i-1-j]*m;
			m=m*10;
		}
		num=-M;
	}
	else
	{
		while(num>0)
		{
			a[i]=num%10;
			num=num/10;
			i++;
		}
		for(j=0;j<i;j++)
		{
			M=M+a[i-1-j]*m;
			m=m*10;
		}
		num=M;
	}
	return(num);
}
