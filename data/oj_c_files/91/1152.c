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
	char str[102], *p, c;
	cin.getline(str,102);c = str[0];
	for (p = str; *p != 0; p++)
	{
		if (*(p+1) != 0)
			*p += *(p+1);
		else
			*p += c;
	}
	for (p = str; *p != 0; p++)
		cout << *p;
	cout << endl;
	return 0;
}