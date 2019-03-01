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

void main()
{
	char a[10];
	int i,j;
	for (i=0;;i++)
	{
		a[i]=getchar();
		if (a[i]=='\n') break;
	}
	j=i-1;
	for (i=j;i>=0;i--)
		printf("%c",a[i]);
}