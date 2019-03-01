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
	char str[100][100], ch;
	int n=0, i;
	for (i=0; ; i++)
	{
		scanf ("%s", &str[i]);
		n++;
		if ((ch=getchar())=='\n') break;
	}
	for (i=n-1; i>=0; i--)
	{
		printf ("%s", str[i]);
		if (i>0) printf (" ");
		else break;
	}
	return 0;
}