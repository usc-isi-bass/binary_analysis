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
	int m=0,i;
	char str[100];
	char *p=NULL;
	gets(str);
	p=str;
	for ( i=0;i<strlen(str);i++)
		{
			if ( *p == ' ' && m == 1 );
			else
				cout << *p;
			if ( *p == ' ' )
				m=1;
			else
				m=0;
			*p++;
		}
	return 0;
}