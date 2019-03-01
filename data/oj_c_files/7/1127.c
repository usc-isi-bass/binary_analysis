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
	char a[256] = {0}, b[256] = {0}, c[256] = {0};
	cin >> a >> b >> c;
	char *p, *q;
	p = strstr(a, b);
	q = a;
	if(p == NULL)
		cout << a;
	else
	{
		while (q != p)
		{
			cout << *q;
			q++;
		}
		cout << c;
		q = q + strlen(c);
		while (*q != '\0')
		{	cout << *q;
			q++;
		}
	} 

	return 0;
}