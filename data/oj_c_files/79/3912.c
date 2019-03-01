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

int kingmonkey(int n,int m);
int main()
{
	int n,m;
	int result;
	for(;;)
	{
		scanf("%d %d",&n,&m);
		if((n==0)&&(m==0))
		{
			break;
		}
		else
		{
			result=kingmonkey(n,m);
			printf("%d\n",result);
		}
	}
	return 0;
}
/*
n??????m????
?????kingmonkey(n,m)=(kingmonkey(n-1,m)+m)%n
?????king(n-1,m)?????????
*/
int kingmonkey(int n,int m)
{
	if(n==1)
	{
		return 1;
	}
	/*??
	if(monkey[n]==0)
	{
		monkey[n]=(kingmonkey(n-1,m)+m+1)%n;
	}
	*/
	else
	{
		int tmp=(kingmonkey(n-1,m)+m);
		if ((tmp%n)==0)
		{
			tmp=n;
		}
		else if(tmp>n)
		{
			tmp=tmp%n;
		}
		return tmp;
	}
}