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
	int n , i , j;
	i = 0;
	char a[9] , ch;
	while ((ch = cin.get()) != '\n' )
	{
		a[i] = ch ;
		i = i + 1;
	}
	i = i - 1;
	while (i >= 0)
	{
		cout << a[i] ;
		i = i - 1;
	}
	cout << endl ;
	return 0;
}
		