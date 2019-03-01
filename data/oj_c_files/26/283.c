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
//????1000012825          *
//??????                *
//???12.10                 *
//???????????      *
//*****************************
int main ()
{
	char str[100];
	cin.getline( str ,100 );    //???????
	char *p = str, *q = NULL;   //????
	for ( p = str;  *p != '\0'; p++ )
	{
		if ( *p == ' ' )
		{
			for ( q = p + 1; *q == ' '; q++ )
				*q ='0';  //??????????????????‘0’
		}
	}
	for ( p = str; *p != '\0'; p++ )
	{
		if ( *p != '0')
			cout << *p ;
	}		//?????‘0’??????
	cout << endl;
	return 0;
}

		