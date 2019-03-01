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

/*************************************************************************************************************
* @file .cpp
* @author ????
* @date 
* @description
*         ??????
*/


int main()
{
	char a[100];
	char *p = NULL,*q = NULL;
	cin.getline(a, 100);
	for(p = a,q = a; *q != '\0';q++)//????????????????????????????????
	{
		if(*q == ' '&& *(q + 1) == ' ')//?????????
			continue;
		else//??????????????
			*p++ = *q;
	}
	q = p - 1;//?????????
	for(p = a; p <= q; p++)
		 cout << *p;//??
	return 0;
}