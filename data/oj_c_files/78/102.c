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
	int tz[4];
	char xs1='z',xs2='q',xs3='s',xs4='l';
	tz[1]=40;
	tz[3]=50;
	tz[0]=20;
	tz[2]=10;
	printf("%c %d\n",xs4,tz[3]);
    printf("%c %d\n",xs2,tz[1]);
	printf("%c %d\n",xs1,tz[0]);
	printf("%c %d\n",xs3,tz[2]);
	return 0;
}
