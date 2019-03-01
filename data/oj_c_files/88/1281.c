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
	int i,m=0;
	char *p=NULL;
	char c[31];
	gets(c);
	p=c;
	for ( i=0;i<strlen(c);i++)
		{
			if ( *p >= '0' && *p <= '9')
				{
					cout << *p;
					m=1;
				}
			else if ( m == 1 )
				{
					cout << endl;
					*p;
					m=0;
				}
			*p++;
		}
	cout << endl;

	return 0;
}
