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
	char s[101], s1[101], *p = NULL, *q = NULL;
	cin.getline(s, 101);
	int i;
	for (i = 0; i < strlen(s) - 1; i++)
	{
		s1[i] = s[i] + s[i + 1];
		cout << s1[i];
	}
	s1[i] = s[i] + s[0];
	cout << s1[i];




	//for (p = s, q = s1; p <= s - 1; p++, q++)
	//	*q = *p + *(p + 1);
//	*q = *p + s[0];
//	cout << s1 << endl;
	return 0;
}