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

void main()
{
	char c;
	int y;
	y=0;
	int t;
	t=1;
	c=getchar();
	while (c!=10)
	{
		y=y+(c-48)*t;
		t=t*10;
		c=getchar();
	}
	printf("%d",y);
}
