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

	int f(int n,int a)
	{
		int j,r;
		if(n==0)
		{
			return 1;
		}
		else if(a==1)
		{
			return 1;
		}
		if(n<a)
		{
			return f(n,n);
		}
		else
		{
			return (f(n,a-1)+f(n-a,a));
		}
	}
	int main()
	{
		int M,N,m,i,a,b,c;
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			scanf("%d%d",&M,&N);
			b=f(M,N);
			printf("%d\n",b);
		}
		return 0;
	}