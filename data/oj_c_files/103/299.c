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
	char a[1001];
	cin >> a;
	char t;
	for (int i = 0; i < strlen(a);)
	{
		if (a[i] > 96)
			a[i] -= 32;
		t = a[i];
		int j;
		for (j = 0; ;j++)
			if (a[i+j] != t && a[i+j] != t + 32)
				break;
		cout << '(' << t << ',' << j << ')';
		i += j;
	}



}

