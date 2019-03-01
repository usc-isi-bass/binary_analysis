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

void factor(int x,int limit);
int result;
int main()
{
	int n;
	scanf("%d",&n);
	int input;
	for(int i=0;i<=n-1;i++)
	{
		scanf("%d",&input);
		result=1;//limit?2?????result=1;
		factor(input,2);//limit?2?????result=1;
		printf("%d\n",result);
	}
	return 0;
}
void factor(int x,int limit)
{
	int remainder;
	if(x<limit)
	{
		return;
	}
	for(int i=limit;i<=x;i++)
	{
		remainder=x%i;
		if(remainder==0)
		{
			if(x/i>=i)
			{
				result++;
				factor(x/i,i);
			}
		}
	}
}