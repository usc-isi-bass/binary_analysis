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

//3.cpp
//?????13
//?????
//???11?12?


int main()
{
	char a[100], b[100];
	int i, j, m, l, yu;
	cin >> a;
	l = strlen(a);
	yu = 0;
	for (i = 0; i < l; i++)
	{
		m = yu * 10 + (a[i] - '0');
		b[i] = m / 13 + '0';
		yu = m % 13;
	}
	j = 0;
	while (b[j] == 48)
	{
		j++;
	}
	if (j == l)
		cout << '0';
	else
		for (i = j; i < l; i++)
			cout << b[i];
	cout << endl;
	cout << yu;
	return 0;
}
