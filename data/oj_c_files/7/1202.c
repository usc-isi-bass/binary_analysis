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
	char s[300], rep[300], sub[300];
	cin >> s >> sub >> rep;
	if (strstr(s, sub))
	{
		char * t = strstr(s, sub);
		*t = '\0';
		cout << s << rep << (t + strlen(sub)) << endl;
	}
	else
	{
		cout << s << endl;
	}
	return 0;
} 