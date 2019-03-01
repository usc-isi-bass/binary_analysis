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

//*******************************************************************
//* ????????			  									*
//* ????????????????								*
//*??? ???													*
//*???2010?12?8?												*
//*******************************************************************
int main()
{
	char str[31];                   //????????
	cin.getline (str, 31);
	char * p = str;                //??????????
	int i = 0;
	while (p < str + strlen(str))
	{
		if (*p >='0' && *p <= '9')       //??????????
			cout << * p;
		if ( *p >= '0' && *p <= '9' && !(*(p + 1) >='0' && *(p + 1) <= '9'))
			cout << endl;//??????????????????????
		p ++;
	}
	return 0;
}
