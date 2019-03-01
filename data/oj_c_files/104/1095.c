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

int search (int n)
{
	return n/2;
}
int main ()
{
	int x, y;
	scanf("%d%d", &x, &y);
	while (x!=y) {
		if (x>y)
			x=search(x);
		else if(x<y)
			y=search(y);
	}
	printf("%d", x);
	return 0;
}