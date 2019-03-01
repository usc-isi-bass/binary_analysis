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

void shu(int a,int b)
{
	int monkey[300];
	int i,j,count;
	for(i=0;i<a;i++)
		monkey[i]=1;
	i=-1;
	for(j=1;j<a;j++)
	{
		count=0;
        do
		{
			i=(i+1)%a;
			count=count+monkey[i];
		}while(count<b);
		monkey[i]=0;
	}
    for(j=0;j<a;j++)
	{
		if(monkey[j]!=0)  {printf("%d\n",j+1);break;}
	}
}
void main()
{
	int n,m;
	while(1)
	{
		scanf("%d %d",&n,&m);
		if(n>0)
			shu(n,m);
		else break;
	}
}


