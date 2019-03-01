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


void main()
{
	int n,i,j=0,x;
	scanf("%d",&n);
	for(x=3;x<=n-2;x+=2)
	{
		for(i=2;i<=sqrt(x);i++)
			if(x%i==0||(x+2)%i==0||(x+2)%(i+1)==0)
				break;
		if(i>sqrt(x))
		{
			printf("%d %d\n",x,x+2);
			j++;
		}
	}
	if(j==0)
		printf("empty");
}