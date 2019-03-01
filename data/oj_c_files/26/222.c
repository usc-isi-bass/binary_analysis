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

 //******************************//
 //*     ?????				*//
 //*     ???1000012711		*//
 //*     ??????????	*//
 //*     ???2010.12.08		*//
 //******************************//
int main()
{
	char str[101], *pointer = str, l, g;
	gets(str);
	l = strlen(str);
	g = 1;
	for (; pointer < str + l; pointer++)
	{
		if (g == 1 && *pointer == ' ')
		{
			g = 0;
			cout << *pointer;
		}
		if (g == 0 && *pointer == ' ')
			continue;
		cout << *pointer;
		if (*pointer != ' ')
			g = 1;
	}
	cout << endl;
	return 0;
}
