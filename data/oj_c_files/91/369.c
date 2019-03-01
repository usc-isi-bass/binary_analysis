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
	char a[101], b[101];
	cin.getline(a,101);
	int i,n;
	n = strlen(a);
	for(i = 0; i <= n - 1; i++)
	{
		if(i == n - 1)
		{
			b[i] = a[i] + a[0];
		}
		else
		{
		    b[i] = a[i] + a[i + 1];
		}
	}
	for(i = 0; i <= n - 1; i++)
	{
		cout << b[i];
	}
	return 0;
}