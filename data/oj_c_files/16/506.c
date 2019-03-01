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

int main ( )
{
	char exp[10], t;
	int i, j;
	cin.getline(exp, 10);
	for(i = 0,j = strlen(exp)-1;i < j;i++, j--)
	{
		t = exp[i];
		exp[i] = exp[j];
		exp[j] = t;
	}
	for(i = 0;i < strlen(exp);i++)
	{
		cout << exp[i];
	}
	return 0;
}