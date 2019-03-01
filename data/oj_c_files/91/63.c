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
	char a[101] = {'\0'};
	char b[101] = {'\0'};
	char * pa = a;
	char * pb = b;
	int i;

	gets(a);
	for (i = 0; i < strlen(a)-1; i++) {
		* pb = * pa + * (pa + 1);
		pb++;
		pa++;
	}
	* pb = * pa + * a;
	printf("%s",b);
	return 0;
}