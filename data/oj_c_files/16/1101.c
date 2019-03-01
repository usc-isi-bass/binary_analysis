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
	int reverse(int m);
	scanf("%d",&a);
	reverse (a);
	return 0;
}
int reverse(int m)
{
	printf("%d",m%10);
	m=m/10;
	if (m!=0) return reverse(m);
}
