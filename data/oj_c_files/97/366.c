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
	int n, a[6]={0},i;
	scanf("%d", &n);
	a[0]=n/100;
	n=n%100;
	a[1]=n/50;
	n=n%50;
	a[2]=n/20;
	n=n%20;
	a[3]=n/10;
	n=n%10;
	a[4]=n/5;
	n=n%5;
	a[5]=n;
	for(i=0;i<6;i++){

	printf("%d\n", a[i]);
	}
	return 0;
}