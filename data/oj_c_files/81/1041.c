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

int fun(int (*p)[5],int n,int m)
{
	int i,t;
	if(n<0||n>=5||m<0||m>=5)
		return 0;
	else
	{
		for(i=0;i<5;i++)
		{
			t=*(*(p+n)+i);*(*(p+n)+i)=*(*(p+m)+i);*(*(p+m)+i)=t;
		}
		return 1;
	}
}
int main()
{
	int n,i,j,m;
	int a[5][5],(*p)[5];
	p=a;
	for(i=0;i<5;i++)
	{	
		for(j=0;j<5;j++)
		{
			scanf("%d",*(p+i)+j);
		}
	}
	scanf("%d%d",&n,&m);
	if(fun(p,n,m)==0)
		printf("error");
	else
	{
		for(i=0;i<5;i++)
	
		{	
		
			for(j=0;j<5;j++)
		
			{
				if(j!=4)
			printf("%d ",*(*(p+i)+j));
				else
         printf("%d\n",*(*(p+i)+j));
		
			}
	
		}
	}



	return 0;
}
