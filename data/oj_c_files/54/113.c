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

int judge_output(int n,int k, int j,int a1)
{
	int tp,out;
	if(j==1)
		return a1;
	else if(judge_output(n,k,j-1,a1))
	{
		tp=judge_output(n,k,j-1,a1);
		if(!(tp%(n-1)))
		{
			out=n*tp/(n-1)+k;
			return out;
		}
		else
			return 0;
	}
	else
		return 0;
}
void main()
{
	int n,k,i,tp=0;
	scanf("%d%d",&n,&k);
	for(i=1;;i++)
	{
		tp=judge_output(n,k,(n+1),i);
		if(tp)
		{
			printf("%d",tp);
			break;
		}
	}
}