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
	char a[100];
	char b[100];
	int l;
	
	cin >> a;
	
	l = strlen(a);
	
	for(int i = 0; i < l; i ++)
	{
		b[i] = a[l - i - 1];
		cout << b[i];
	}
	
	return 0;
}
