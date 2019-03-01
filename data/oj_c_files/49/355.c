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
	char a[500];
	int i, j, k, l, flag;
	gets(a);
	l = strlen(a);
	for (i = 1; i < l; i++)
		for (j = 0; j < l - i; j++)
		{
		   flag = 1;
		   for (k = j; k <= j + i; k++)
		       if (a[k] != a[2*j + i - k])
				   flag = 0;
		   if (flag)
		   {
			   for (k = j; k <= j + i; k++)
				  cout << a[k];
			   cout << endl;
		   }
		}
	return 0;
}