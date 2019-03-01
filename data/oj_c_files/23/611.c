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
	char a[100][100];
	int i;
	char c;
	for (i=0;;i++)
	{
		scanf ("%s%c",a[i],&c);
		if (c!=' ')
		{
			break;
		}
	}
	printf ("%s",a[i]);
	for (i-1;i-1>=0;i--)
		printf (" %s",a[i-1]);
} 