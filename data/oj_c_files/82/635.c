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
	int a,b;
	int sum=0;
	int x=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		if(90<=a&&a<=140&&60<=b&&b<=90)
		{
			sum++;
		}
		else
		{
			sum=0;
		}
		if(sum>=x)
		{
			x=sum;
		}
	}
	printf("%d",x);
	return 0;
}