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
	int a;
	scanf("%d", &a);
	printf("%d\n",a/100);
	a%=100;
	printf("%d\n",a/50);
	a%=50;
	printf("%d\n",a/20);
	a%=20;
	printf("%d\n",a/10);
	a%=10;
	printf("%d\n",a/5);
	a%=5;
	printf("%d\n",a);
	return 0;
}