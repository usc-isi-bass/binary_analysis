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
	int n,y=0;
	scanf("%d",&n);
	while(n>9)
	{
		y=y+n-n/10*10;
		n=n/10;
		y*=10;
	}
	y=y+n;
	printf("%d\n",y);
	return 0;
}

