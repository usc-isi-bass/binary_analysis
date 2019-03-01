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

//4.cpp
//??????????
//?????
//???12?7?


int main()
{
	char s[200];
	char a;
	char *p;
	cin.getline(s,200);
	p = s;
	while (*p != '\0')
	{
		if (*(p+1) == '\0')
		{
			a = *p + s[0];
			cout << a;
		}
		else
		{
			a = *p + *(p+1);
			cout << a;
		}
		p++;
	}
	return 0;
}
