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



char key[3][10] = {"er", "ly", "ing"};

int main()
{
	int n;
	int l;
	char *p;
	char c[50];

	cin >> n;

	while(n --)
	{
		cin >> c;

		l = strlen(c);

		p = c + l - 2;

		if(strcmp(p, key[0]) == 0 || strcmp(p, key[1]) == 0)
			*p = 0;
		else
			*(p - 1) = 0;

		cout << c << endl;
	}
	
}