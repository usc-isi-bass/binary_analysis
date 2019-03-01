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
	char c[101];
	int empty=0;
	int i;	
	gets(c);
	for (i=0;;i++)
	{
		if (c[i]==0) break;
		else if (c[i]==' '&&empty==0) {printf(" ");empty++;}
		else if (c[i]!=' ') {printf("%c",c[i]);empty=0;}
	}
    return 0;
}

