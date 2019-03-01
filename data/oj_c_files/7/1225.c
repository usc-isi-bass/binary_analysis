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
//??:????                                         **
//??:??         1200012935                          **
//??:2012.12.28                                       **

int main()
{
	char *p = NULL;
	char str[100], substr[100], restr[100];
	cin >> str >> substr >> restr;
	p = strstr(str, substr);               
	if(p != NULL)                            //????????
	{ 
	    strcat(restr, p + strlen(substr));     //?????????????restr??
	    *p = '\0';                         //????
    	strcat(str, restr);                 //???????restr???str??
	}
	    cout << str;

	return 0;
}