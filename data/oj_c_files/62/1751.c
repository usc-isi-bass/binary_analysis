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
	int i = 0;
	char c[100];
	char *p;
	cin.getline(c,100);
	cout << c[0];
	for(p = c + 1; *p != '\0'; p++)
	{
		if(*p == ' ' && *(p - 1) == ' ')
			continue;
		cout << *p;
	}
	cout << endl;
	return 0;
}