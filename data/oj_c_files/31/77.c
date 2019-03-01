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


void myPrint()
{
	char str[100];
	gets(str);
	if(strcmp(str,"end"))
		myPrint();
	else
		return;
	puts(str);
}

int main()
{
	myPrint();

	return 0;
}
