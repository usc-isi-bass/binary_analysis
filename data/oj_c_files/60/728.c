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


int ifprime(int n)
{
	int i,k=(int)sqrt(n);
	for(i=2;i<=k;i++)
	{
		if(!(n%i))
			return 0;
	}
	return 1;
}

main()
{
	int i,n,flag=0;
	scanf("%d",&n);
	for(i=3;i<=n;i++)
	{
		if(i==5)
		{
			flag=1;
			printf("%d %d\n",3,5);
			i=6;
		}
		else if(i>5)
		{
			if(ifprime(i) && ifprime(i-2))
				printf("%d %d\n",i-2,i);
			i+=5;
			//printf("%d,",i);
		}
	}
	if(!flag) printf("empty");
}
