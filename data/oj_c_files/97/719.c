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
	int n,hundred,fifty,twenty,ten,five,one;
	scanf("%d",&n);
	hundred=n/100,n=n%100;
	fifty=n/50,n=n%50;
	twenty=n/20,n=n%20;
	ten=n/10,n=n%10;
	five=n/5;n=n%5;
	one=n;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",hundred,fifty,twenty,ten,five,one);
	return 0;
}