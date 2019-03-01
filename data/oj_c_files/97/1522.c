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
	int n,a[6];
    scanf("%d",&n);
	a[0]=n/100;
	a[1]=n%100/50;
	a[2]=n%100%50/20;
	a[3]=n%100%50%20/10;
	a[4]=n%100%50%20%10/5;
	a[5]=n%100%50%20%10%5;
	printf("%d\n%d\n%d\n%d\n%d\n%d",a[0],a[1],a[2],a[3],a[4],a[5]);
	return 0;
}
