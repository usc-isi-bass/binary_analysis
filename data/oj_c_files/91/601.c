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

//**********************************
//????10000012825              *
//??????                     *
//???12.15                      *
//????????????         *
//**********************************
int main ()
{
	char str1[101], str2[101];
	int i, len;
	cin.getline( str1, 101 );
	len = strlen ( str1 );  //??????????
	for ( i = 0; i <= len - 2; i++ )
		str2[i] = str1[i] + str1[ i + 1 ]; //??????????????
	str2[len - 1] = str1[len - 1] + str1[0];
	str2[len] = '\0'; //?????\0?????
	for ( i = 0; str2[i] != 0; i++ )
		cout << str2[i];
	cout << endl; //????
	return 0;
}


