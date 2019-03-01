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

void work(int n);
int main()
{
	int n;
	scanf("%d",&n);
	work(n);
	return 0;
}
void work(int n)
{
	if(n==1)
		printf("End\n");
	else
		if(n%2==1)
		{
			int a=n*3+1;
			printf("%d*3+1=%d\n",n,a);
			n=a;
			work(n);
		}
		else
		{
			int a=n/2;
			printf("%d/2=%d\n",n,a);
			n=a;
			work(n);
		}
}
