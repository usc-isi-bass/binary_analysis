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


int ss(int a)
{
	for(int i=2;i<a;i++)
	{
		if(a%i==0)
		return 1;
	}
	return 0;
}

main()
{
	int n;
	scanf("%d",&n);
	if(n<5)
	printf("empty");
	else
	{
		for(int i=2;i<=n-2;i++)
		{
			if(ss(i)==0 && ss(i+2)==0)
			printf("%d %d\n",i,i+2);
		}
	}
}