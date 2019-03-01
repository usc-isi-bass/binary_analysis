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

//2.cpp
//???????
//?????
//???12?27?


int main()
{
	char s[256], z[256], r[256];
	int i;
	cin.getline(s, 256);
	cin.getline(z, 256);
	cin.getline(r, 256);
	char *p = strstr(s, z);
	if (p == NULL)
		cout << s;
	else
	{
		char *q = s;
		for (i = 0; i < (p-q); i++)
			cout << s[i];
		cout << r;
		p = p + (strlen(z));
		while (*p != '\0')
		{
			cout << *p;
			p++;
		}
	}
	return 0;
}