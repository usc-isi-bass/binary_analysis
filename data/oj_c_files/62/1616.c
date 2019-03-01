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
	char a[201];
	char *p = NULL;
	gets(a);
	p = a;
	int n = strlen(a);
	//cout << n << endl;
	int num = 0;
	for(p = a; p < a+n; p++)
	{
		if( *p == ' ' )
			num ++;
	    if( *p != ' ' && *(p-1) == ' ' )
			num = 0;
		if( num  == 0 || num == 1 )
			cout << *p;
	}
	return 0;
}