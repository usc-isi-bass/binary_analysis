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

int main ()
{
	int i, n, t;
	scanf("%d", &n);
	if (n==0)
		printf("0");
	else {
	for (i=0; i<5; i++)
	{
		if (n!=0){
		t=n%10;
		printf("%d", t);
		n=(n-t)/10;
		}
					}
	}
	return 0;
}