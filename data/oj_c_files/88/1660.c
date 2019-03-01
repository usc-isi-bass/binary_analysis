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
	char s[35];
	gets(s);
	char * ps=s;
	int i=0, num=0;
	for(; *ps; ps++) {
		if (*ps>='0'&&*ps<='9') {
			num+=*ps-'0';
			num*=10;
			i=1;
		}
		else if (i==1) {
			printf("%d\n", num/10);
			num=0;
			i=0;
		}
	}
	if (i==1) printf("%d\n", num/10);
	return 0;
}