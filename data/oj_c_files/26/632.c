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
	int l, i, j;
	 char a[1001];
	 gets(a);
	 l = strlen(a);
	 for (i = l - 1; i > 0; i--)
		 if (a[i]== ' ' && a[i - 1] == ' ')
		 {
			 l--;
			 for (j = i; j < l ; j++)
				 a[j] = a[j + 1];
		 }
	for (i = 0; i < l; i++)
		cout << a[i];
	return 0;
}