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
	char a[256], b[256], c[256];
	int i;
	char *p;
	cin >> a >> b >> c;
	p = strstr(a, b);
	if(p != NULL)
	{
		for(i = 0;i < p - a;i++)
			cout << a[i];
		cout << c;
		for(p = p + strlen(b);p < a + strlen(a);p++)
			cout << *p;
	}
	else
		cout << a;
	cout << endl;
	return 0;
}
