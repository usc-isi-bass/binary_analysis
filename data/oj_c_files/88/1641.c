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
	char c[31];
	cin.getline(c,31);
	int n = sizeof(c);
	for (int i = 0; i < n; i++)
	{
		if (isdigit(c[i]))
			cout << c[i];
		else
			cout << endl;
	}
	return 0;
}