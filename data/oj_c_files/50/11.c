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

int main () {
    int w;
	scanf ("%d", &w);
	int a[12];
	int i;
	a[0]=13;
	a[1]=31+13;
	a[2]=31+28+13;
    a[3]=31+28+31+13;
	a[4]=31+28+31+30+13;
	a[5]=31+28+31+30+31+13;
	a[6]=31+28+31+30+31+30+13;
	a[7]=31+28+31+30+31+30+31+13;
	a[8]=31+28+31+30+31+30+31+31+13;
	a[9]=31+28+31+30+31+30+31+31+30+13;
	a[10]=31+28+31+30+31+30+31+31+30+31+13;
	a[11]=31+28+31+30+31+30+31+31+30+31+30+13;
		for (i=0; i<12; i++) {
			if ((a[i]-(8-w))%7 == 5) {
		printf ("%d\n", i+1);
			}
		}
    return 0;
}