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
	int i,l;
	char c[101];
	gets(c);
	l=strlen(c);
	for(i=0;i<=l-1;i++){
		printf("%c",c[i]+c[(i+1)%l]);
	}
	return 0;
}

