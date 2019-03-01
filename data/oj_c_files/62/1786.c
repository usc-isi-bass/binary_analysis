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

//????
int main()
{
	char a[101],b[101];
	char *p,*q;
	cin.getline (a,100);          //?????????
	for (p = a, q = b; *p != '\0'; p++)        //?p?q????a?b?????p
	{
		if (!((*p == ' ') && (*(p-1) == ' ')))     //????p?????????????????????????q??b?
		{
			*q = *p;						
			q++;
		}	                                 //???????
	}
	*q = '\0';                             //??????
 	cout << b << endl;
	return 0;
}