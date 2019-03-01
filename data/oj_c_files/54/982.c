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




int Num(int apple,int n,int k)
{
	int t;
	for(t=2;t<=n;t++)
	{
		if(apple%(n-1)==0) apple=apple/(n-1)*n+k;
		else
		{
			apple=0;
			break;
		}
	}
	return apple;
}

int main()
{
	int n,k,i,apple;
	scanf("%d%d",&n,&k);
	for(i=1;i>0;i++)
	{
        apple=n*i+k;
		if(Num(apple,n,k)!=0)
		{
			printf("%d",Num(apple,n,k));
			break;
		}
	}
	return 0;
}
