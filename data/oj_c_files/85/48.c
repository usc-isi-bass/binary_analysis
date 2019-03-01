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
	char a[20];
	int i, j, n, t, l;
	scanf ("%d", &n);
	for (j=0; j<n; j++)
	{
		t = 0;
		scanf ("%s", a);
		l = strlen(a);
		for (i=0; i<l; i++)
		{
			if (a[0]<'A')
				t++;
			if (a[i]<'0')
				t++;
		    if (a[i]>'9' && a[i]<'A')
			    t++;
			if (a[i]>'Z' && a[i]<'_')
			    t++;
			if (a[i]>'_' && a[i]<'a')
			    t++;
			if (a[i]>'z')
			    t++;
		}
		if (t == 0)
			printf ("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
