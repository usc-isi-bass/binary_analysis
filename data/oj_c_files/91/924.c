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

//********************************************************
//*  ???:4.cpp                                        *
//*  ??????    1200012948                          *
//*  ????: 2012 12 04                                *
//*  ????:???????                             *
//********************************************************
int main()
{
	char s[110], s1[110];
	char *p = NULL, *p1 = NULL;
	cin.getline(s,110);
	for (p = s; *p != '\0'; p++);  //???????
	p--;
	p1 = p - s + s1 + 1;
	*p1 = '\0';
	p1--;
	*p1 = *p + *s;      //??????????
	for (p--; p >= s; p--)
	{
		p1--;
		*p1 = *p + *(p + 1);
	}
	for (p1 = s1; *p1 != '\0'; p1++)  //??s1
	{
		cout << *p1;
	}
	cout << endl;
	return 0;
}
