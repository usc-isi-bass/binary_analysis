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
	char s[101], s1[101], *p, *q;
	int i;
	cin.getline(s,101);
	int len = strlen(s);
	p = s;
	q = p;
	for (i = 0; i < len - 1; i++)
	{
		s1[i] = *p + *(p + 1);
		p++;
	}
	s1[len - 1] = *q + *p;
	for (p = s1; p < s1 + len; p++)
		cout << *p;
	cout << endl;
	return 0;
}