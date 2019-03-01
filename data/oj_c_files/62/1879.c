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

//*****************************
//*??? :???????     *
//*??   :???             *
//*??   :2011?11?         *
//*****************************
int main()
{
	int m;
	char *p, *w, q[100];
	cin.getline(q,100);
	m = strlen(q);
 	w = &q[100];
	p = &q[100];
	for (p = q; p < q + m; p++)
	{
		if (*p == ' ')
		{
			for (w = p + 1; *w == ' '; w++)
			{
				*w = '1';
			}
		}
	}
	for (w = q; w < q + m; w++)
	{
		if (*w != '1') cout << *w;
	}
	return 0;
}

