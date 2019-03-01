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

int prime(int a)
{
	int i;
	for(i=2;i<=a/2;i++)
	    if(a%i==0) return 1;
	return 0;
}

main()
{
	int n,i,a=0;
	scanf("%d",&n);
	for(i=2;i<=n-2;i++)
	{
		if(prime(i)==0&&prime(i+2)==0)
		{printf("%d %d\n",i,i+2);a++;}
	}
	if(a==0) printf("empty");
}