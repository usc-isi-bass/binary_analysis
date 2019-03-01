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

int Fib(int n)
{
	int ans;
	if(n==0) ans = 0;
	else if(n==1) ans = 1;
	else ans = Fib(n-1)+Fib(n-2);
	return ans;
}
main()
{
	int n,num,i;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&n);
		printf("%d\n",Fib(n));
	}
}