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

//*****************************
//*  ???????????   *
//*  ?  ?????           *
//*  ?  ??1000012738       *
//*  ?  ??2010.12.21.      *
//*****************************

int main()
{
	char str[101], convert[101];          // ????????
	cin.getline(str, 101);                // ?????
	int length = strlen(str);             // ????
	int i;                                // ??????
	for(i = 0; i < length - 1; i++)       // ?????????
	{
		convert[i] = str[i] + str[i + 1]; // ????
	}
	convert[i] = str[0] + str[i];         // ????
	for(i = 0; i < length; i++)
	{
		cout << convert[i];               // ??
	}
	cout << endl;
	return 0;
}