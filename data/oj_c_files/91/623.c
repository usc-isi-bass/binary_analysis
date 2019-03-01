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

//***************************************************************
//* ????1000012870_1.cpp									
//* ??? ???											
//* ?????12 15											
//* ?????	???????									
//***************************************************************
int main ()
{
	char str[101], a[101];
	int i, l;
	cin.getline(str,101);
	l = strlen(str);
	for(i = 0; i < l - 1; i++)
		a[i] = str[i] + str[i + 1];
	a[i] = str[i] + str[0];
	for(i = 0; i < l; i++)
		cout << a[i];
	cout << endl;
	return 0;
}