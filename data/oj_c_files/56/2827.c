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
	void f(int x);
	int x;
	scanf("%d",&x);
	f(x);
	return 0;
}
void f(int x)
{
	if (x>=10)
	{
		printf("%d",x%10);
		int y;
		y=(x-x%10)/10;
		f(y);
	}
	else printf("%d\n",x);
}