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

int yes(int m)
{
	int j,k,flag=0;
	k=sqrt(m);
	for(j=2;j<=k;j++)
		if(m%j==0)break;
	if(j>k) flag=1;
	return(flag);
}
void main()
{
	int n,i,j;
	int flag1=0,flag2=0;
	scanf("%d",&n);
    if(n%2!=0)
	{
		if(n==3)
		{
			printf("empty");
		}
		if(n!=3)
		{
		for(i=3;i<n;i++)
		{
			flag1=yes(i);
		    flag2=yes(i+2);
			if(flag1==1&&flag2==1)
			{
				printf("%d %d\n",i,i+2);
			}
			else if((flag1==0&&flag2==0)||(flag1==0&&flag2==1)||(flag1==0&&flag2==0)) continue;
		}
		}
	}
	 if(n%2==0)
	{
		 if(n==4)
		{
			printf("empty");
		}
		if(n!=4)
		{
		for(i=3;i<n-1;i=i+2)
		{
			flag1=yes(i);
		    flag2=yes(i+2);
			if(flag1==1&&flag2==1)
			{
				printf("%d %d\n",i,i+2);
			}
			else if((flag1==0&&flag2==0)||(flag1==0&&flag2==1)||(flag1==0&&flag2==0)) continue;
			
		}
		}
	}
}