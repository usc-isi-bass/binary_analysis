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

//********************************************
//* file : 1000012912_001.cpp                *
//* author : ???                          *
//* data : 2010.12.8                         *
//* function : ??????                  *
//********************************************
int main()
{ 
	int num, i, j, len;                //len?????
	char str[101], *p;                 //p?str??
	cin.getline(str,101);
	len = strlen(str);
	for ( j = 0; j < len ; j++ )
	{
		p = str + j;
		num = -1;
		while ( *p == ' ' )
		{
			num++;                         //num????-1
			p++;
		}
		if ( num > 0 )
		{
			for ( i = p -str; i < len; i++ )
				*(p - num)= *p++;               //??
			len -= num;                  //??????
		}
	}
	str[len] = '\0';                   //???0
	cout << str << endl;
	return 0;
}









