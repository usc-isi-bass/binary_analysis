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
	char str[101];
	cin.getline(str, 101);
	char *p = str;
	char ch = str[0];
	while (p < str + strlen(str) - 1)
	{
		* p = * p + * (p+1);
		p ++;
	}
	* p += ch;
	* ++p = '\0';
	for (p = str; p < str + strlen(str); p ++)
		cout << * p ;
	return 0;
}

		