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
	void print(int n);
	int n;
	scanf("%d",&n);
	print(n);
	return 0;
}

void print(int n)
{
	if(n<10)
		printf("%d",n);
	else
	{
		printf("%d",n%10);
		print(n/10);
	}
}