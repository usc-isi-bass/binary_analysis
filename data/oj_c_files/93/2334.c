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
	int a,f=0;
	scanf("%d",&a);
	if (a%3==0) {
		printf("3");
        f++;
	};
	if (a%5==0) {
		if  (f) printf(" ");
	    printf("5");
		f++;
    };
	if (a%7==0) {
		if (f) printf(" ");
		printf("7");
	    f++;
	};
	if (!f) printf("n");
	return 0;
}