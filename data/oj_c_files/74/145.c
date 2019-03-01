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
	int sushu(int);
	int huiwen(int);
	int n,m;
	int x;
	int count=0;
	scanf("%d %d",&m,&n);
    for(x=m;x<=n;x++)
	{
		if(sushu(x)==1&&huiwen(x)==1)
		{
			if(count==0)
			{
				printf("%d",x);
			}
			else
			{	
				printf(",%d",x);
			}
			count++;
		}
	}
	if(count==0)
	{
		printf("no\n");
	}
}
int sushu(int x)
{
	int i,k=0,j;
	j=(int)(sqrt(x))+1;
	for(i=2;i<=j;i++)
	{
	    if(x%i==0&&x!=i)
		{
			break;
		}
	}
	if(i==j+1)
	{
		k=1;
	}
	return(k);
}
int huiwen(int x)
{
	int z=0;
	int y=0;
	int i,k;
	k=x;
	while(x!=0)
	{
	i=x-(int)(x/10)*10;
	y=y*10+i;
	x=(int)(x/10);
	}
	if(y==k)
	{
		z=1;
	}
	return(z);
}
