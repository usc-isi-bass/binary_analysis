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
	int w,m,d,a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&w);
	w=w+12;
	if (w>7) w=w%7;
	if (w==5) printf("1\n");
	for  (m=2;m<=12;m++){
		w=w+a[m-2];
        if (w>7) w=w%7;
	    if (w==5) printf("%d\n",m);
	}
	return 0;
}