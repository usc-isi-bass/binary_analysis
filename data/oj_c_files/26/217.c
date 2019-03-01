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
	char str[301];
	char *p = NULL, *q = NULL, *r = NULL;
	int count;
	cin.getline(str,101);
	int a = strlen(str);
	p = str;
	while(*p != '\0')
	{
		count = 0;
		if(*p == ' ')
		{
			for(r = p; *r == ' '; r++)
				count++;
			for(;r < str + 4 * a; r++)
				*(r - count + 1) = *r;
		}
		p++;
	}
	cout << str << endl;
	return 0;
}