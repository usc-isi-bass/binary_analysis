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
	char s[101], *p;
	int i;
	cin.getline(s, 101);
	int l = strlen(s);
	p = s;
	for (i = 0;i < l - 1;i++)
	{
		char a = p[i] + p[i + 1];
		cout << a;
	}
	char b =  p[0] + p[l - 1];
	cout << b;

	return 0;
}