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


int main(int argc, char* argv[])
{
	int i,n,m=1,c,g;
	scanf("%d",&n);
	for (i=1;i<=5;i++)
	{
		m=m*10;
		if ((n/m)==0)
		{
			c=i;
			break;
		}
	}
	for (i=1;i<=c;i++)
	{
		g=n%10;
		if (g==0)
		{
			printf("0");
		}
		else 
		{
			printf("%d",g);
		}
		n=n/10;
	}
	printf("\n");
	return 0;
}

