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
	int n, m;
	scanf("%d",&n);
	if(n==0)
		printf("%d",0);
	else
	{
		while(n!=0)
		{
			m=n%10;
			printf("%d",m);
			n=n/10;
		}
	}
	return 0;
}


