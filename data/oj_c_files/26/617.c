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
	char a[100];
	int i,s;
	gets(a);
	for (i=0;i<=99;i++)
	{
		if (a[i]=='\0') break;
		if (a[i]=='.') {printf(".");break;}
		if (a[i]!=' ') printf("%c",a[i]);
		else if (a[i-1]!=' ') printf(" ");
	}
	return 0;
}
