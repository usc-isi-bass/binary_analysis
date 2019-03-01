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
	int a,i;
	scanf("%d", &a);
	for (i=1;i<=4;i++)
	{
	    printf("%d", a%10);
		a=a/10;
		if (a<1) break;
	}	
	return 0;
}