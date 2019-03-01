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
{	char s[1000];
	char * p, * a;
	int i;
	gets(s);
	a=s;
	for(p=s; p<s+strlen(s)-1; p++){
		printf("%c",*p + *(p+1));
	}
	printf("%c",*p + *a);
	return 0;
}
