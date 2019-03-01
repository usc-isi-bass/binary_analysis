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

int yuqiwuguan(int);
int main()
{
	int n;
	int sum=0;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		if(yuqiwuguan(i))
		{
			sum+=i*i;
		}
	}
	printf("%d",sum);
	return 0;
}
int yuqiwuguan(int i)
{
	int r;
	if(i%7==0||i%10==7||i/10==7)
	{
		r=0;
	}
	else
	{
		r=1;
	}
	return r;
}