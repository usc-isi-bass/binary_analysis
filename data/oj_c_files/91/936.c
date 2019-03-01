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

//****************************************************
//*  ? ? ?: homework.cpp                          *
//*  ?    ?: ???                                *
//*  ????: 2012?12?2?                         *
//*  ????: ???????                        *
//****************************************************


int main()
{
	char st1[102], st2[102];
	char *p, *q;
	p = st1;
	q = st2;
	cin.getline(st1, 102); //?? 
	while (*(p + 1) != '\0') 
	{
		*(q++) = *p + *(++p); //?? 
	}
	*(q++) = *p + *st1; //???????? 
	*q = '\0'; //??????\0 
	cout << st2 << endl; //?? 
	
}
