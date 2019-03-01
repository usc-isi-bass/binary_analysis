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

int change(int n,int m)
{
	int c;
	if((n>=0)&&(n<=4)&&(m>=0)&&(m<=4)) c=1;
	else c=0;
	return c;
}
void main()
{
	int m,n,num[5][5],*p[5],i,q,c;
	for(i=0;i<5;i++)
		for(q=0;q<5;q++) scanf("%d",&num[i][q]);
	scanf("%d %d",&n,&m);
	for(i=0;i<5;i++)
		p[i]=num[i];
	c=change(n,m);
	if(c==0) printf("error");
	else
	{
		for(i=0;i<5;i++)
		{
			if(i==n) 
			{
				for(q=0;q<4;q++) printf("%d ",num[m][q]);
				printf("%d\n",num[m][4]);
			}
			else if(i==m)
			{
				for(q=0;q<4;q++) printf("%d ",num[n][q]);
				printf("%d\n",num[n][4]);
			}
			else 
			{
				for(q=0;q<4;q++) printf("%d ",num[i][q]);
				printf("%d\n",num[i][4]);
			}
		}
	}
}
