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
	int n;
	void reverse(int n);
	scanf("%d",&n);
	reverse(n);
	return 0;
}
void reverse(int n)
{
	if(n < 1)
		return;
	printf("%d",n % 10);
	reverse(n / 10);
}