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
	int isit(int);
	int n;
	int empt=1;
	scanf("%d",&n);
	int i;
	for(i=2;i<=n-2;i++)
	{
		if (isit(i)&&isit(i+2))
		{
			empt=0;
			printf("%d %d\n",i,i+2);
		}
	}
	if(empt)
		printf("empty");
	return 0;
}
int isit(int num)
{
	int i;
	for(i=2;i*i<=num;i++)
	{
		if(num%i==0)
		{return 0;
		goto end;}
	}
	return 1;
end:;
}