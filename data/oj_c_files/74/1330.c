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

int huiwen(int m,int n)
{
	if(m==0)return (n);
	else return(huiwen(m/10,n*10+m%10));
}
int sushu(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
		if(n%i==0)break;
	if(i>sqrt(n))return (1);
	else return (0);
}
int main()
{
	int m,n,i,j;
	scanf("%d%d",&m,&n);
	for(i=m,j=0;i<=n;i++)
	{if(i==huiwen(i,0)&& sushu(i)) 
	{j++;if(j>1)printf(",%d",i);
	     else if(j==1)printf("%d",i);
	}
	}
	if(j==0)printf("no");
	return (0);
}
