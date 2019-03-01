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
	char a[101];
	cin.getline(a,101);
	char *p;
	p = a;
	char b[101];
	int n = strlen(a);
	int i = 0;
	for (i = 0;i < n;i++)
	{
		if (i != n-1)
			b[i] = p[i] + p[i+1];
		else
			b[i] = p[i] + p[0];
	}
	for (i = 0;i < n;i++)
		cout<<(char)(b[i]);
	return 0;
}