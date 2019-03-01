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

int main()
{
	int n,s,r;
	scanf("%d",&n);
	if(n==1)
	{
		printf("End");
		return 0;
	}
	s=n;
	for(r=1;s!=1;r++)
	{
		if(n%2!=0)
		{
			s=n*3+1;
			printf("%d*3+1=%d\n",n,s);
			n=s;
		}
		else if(n%2==0)
		{
			s=n/2;
			printf("%d/2=%d\n",n,s);
			n=s;
		}
	}
	printf("End");
	return 0;
}