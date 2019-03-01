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

/**
 * 2.cpp
 * ?? ??
 * ?? 2011 11 29
 * ???????
 */
int main()
{
	char str[1000];
	char * p;
    cin.getline(str, 1000);
	p = str;
	
	
	while (*p != '\0') 

	{
		while ((*p != ' ') && (*p != '\0'))
		{
			cout << *p;
			p++;
		}

        if (*p == '\0')   // ???? ???????? ?????????p++???????????‘\0’) 
			break;

		while ((*p == ' ') && (*p != '\0'))
			p++;

        if (*p == '\0')   // ???? ???????? ?????????p++???????????‘\0’) 
			break;
		else cout << ' ';
	}
	return 0;
}

 //~                                                                                                  1.
//????????100?? ?????
		







