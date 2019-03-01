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
	char input[100];
	char *p = NULL;
	int i;
	int length;
	p = input;
	cin.getline(input, 100);
	length = strlen(input);
	cout << input[0];
	for (i = 1; i < length; i++)
	//for (p = input; p < length; p++)
	{
		p++;
		if (*p == ' ' && *(p - 1) == ' ')
				continue;
		cout << *p;
	}
	return 0;
}