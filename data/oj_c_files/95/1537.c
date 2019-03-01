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



char a[100];
char b[100];

int main()
{
	char *p;

	cin.getline(a, 100);
	cin.getline(b, 100);

	p = a;

	while(*p != 0)
	{
		if( 'A' <= *p && 'Z' >= *p)
			*p += 32;

		p ++;
	}

	p = b;
	
	while(*p != 0)
	{
		if('A' <= *p && *p <= 'Z')
			*p += 32;

		p ++;
	}

	if(strcmp(a, b) == 0)
		cout << '=' << endl;
	else if(strcmp(a, b) < 0)
		cout << '<' << endl;
	else
		cout << '>' << endl;

	
}
