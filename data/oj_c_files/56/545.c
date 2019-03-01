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
	int a,b=0;
	scanf("%d",&a);
    while(a>9)
	{
		b=(a-a/10*10)*10+b*10;
		a=a/10;
	}
	b=b+a;
	printf("%d",b);
	return 0;
}

