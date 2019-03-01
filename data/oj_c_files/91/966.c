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

//**********************************************************
//*  ?????4.cpp                                       *
//*  ??????1200012906                                *
//*  ???2012?12?3?                                   *
//*  ????????????                              *
//**********************************************************

int main()
{
	char str[101], *p, t;
	cin.getline(str, 101);
	p = str;
	t = *p;  //????????
	for(; p < str + strlen(str) - 1; p++)
	{
		*p = *p + *(p + 1);
		cout << *p;
	}
	t = *p + t;
	cout << t << endl;
	return 0;
}