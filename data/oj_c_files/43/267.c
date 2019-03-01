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

int zhishu(int x)
{
	int flag=1;
	for(int i=2;i<=x/2;i++)
	{
		if(x%i==0)
		{
			flag=0;
		}
	}
	return flag;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=3;i<=n/2;i++)
	{
		if(zhishu(i)&&zhishu(n-i))
		{
			printf("%d %d\n",i,n-i);
		}
	}
	return 0;
}
