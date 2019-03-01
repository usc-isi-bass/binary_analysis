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

int fuck(int a)
{
	for(int i=2;i<=a-1;i++)
	{
		if(a%i==0)
		return 0;
		else
		{
			if(i==a-1)
			return 1;
			else
			continue;
		}
	}
}
main()
{
	int n;
	int a=0;
	scanf("%d",&n);
	for(int i=2;i<=n-2;i++)
	{
	    if(fuck(i)==1 && fuck(i+2)==1)
		{
			printf("%d %d\n",i,i+2);
			a=a+1;
		}	
		else
		continue;	
	}
	if(a==0)
	printf("empty");
	else
	return 0;
}