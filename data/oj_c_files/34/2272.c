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
	int n;
	scanf("%d",&n);
	for (;;)
	{
		if (n==1)
		{
			printf("End\n");
			break;
		}
		else if(n%2==1)
		{
			printf("%d*3+1=%d\n",n,(3*n+1));
			n=3*n+1;
			continue;
		}
		else if (n%2==0)
		{
			printf("%d/2=%d\n",n,(n/2));
			n=n/2;
			continue;
		}
	}
	return 0;
}

