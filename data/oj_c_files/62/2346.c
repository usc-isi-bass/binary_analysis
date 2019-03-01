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
	char str[10000];
	char *r, *w;
	r = w = NULL;
	cin.getline(str,10000,'\n');
	r = w = str;
	while(*r != '\0')
	{
		*w = *r;
		if(*r == ' ')
		{
			while(*r == ' ')
				r++;
			r--;
		}
		w++;r++;
	}
	*w = '\0';
	cout << str << endl;
	return 0;
}