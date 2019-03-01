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

int main ()
{
	char a[1000];
	int i, con = 1;
	cin >> a;
	if (a[0] >= 'a' && a[0] <= 'z')
		a[0] -= 32;
	for (i = 1; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		a[i] -= 32;
		if (a[i] == a[i-1])
			con++;
		else
		{
			cout << '(' << a[i-1] << ',' << con << ')';
			con = 1;
		}
	}
	cout << '(' << a[i-1] << ',' << con << ')';
	return 0;
}