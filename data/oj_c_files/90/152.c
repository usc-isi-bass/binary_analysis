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
	int a(int x,int y);
	int m[20],n[20],t;
	int num[20];
	int i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
		scanf("%d %d",&m[i],&n[i]);
	for(i=0;i<t;i++)
	{	num[i]=a(m[i],n[i]);
		printf("%d\n",num[i]);
	}
}

int a(int x,int y)
{
	int sum=0;
	if(x==1||y==1||x==0)
		sum+=1;
	
	else
	{
		if(x-y>y)
	    sum+=a(x,y-1)+a(x-y,y);
	    else
		sum+=a(x,y-1)+a(x-y,x-y);
	}
	
	return(sum);
}

