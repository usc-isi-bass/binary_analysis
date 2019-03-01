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

int Check(int i,int n,int k,int *m,int time)
{
	if(time==n)
	{
		return 1;
	}
	if((i*n)%(n-1)==0)
	{
		*m=(i*n)/(n-1)+k;
		time++;
		return Check((i*n)/(n-1)+k,n,k,m,time);
	}else{
		return 0;
	}
}



int main()
{
	int n,k,*m,time=0,a;
	scanf("%d%d",&n,&k);
	int i;
	m=&a;
	*m=0;
	for(i=1;1;i++)
	{
		if(Check(i,n,k,m,time))
		{
			printf("%d\n",*m);
			break;
		}
	}
	return 0;
}