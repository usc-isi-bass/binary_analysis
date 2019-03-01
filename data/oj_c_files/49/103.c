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

//*************************************************
//* file: 1000012912_005.cpp                      *
//* author : ???                               *
//* date : 2010.11.26                             *
//* function : ????                           *
//*************************************************
void huiwen(int pos, int l , char str[]);
int main()
{
	int i, len, l;                                        //l?????
	char str[500];  
	cin.getline(str,500);
	len = strlen(str);
	for ( l = 2; l <= len; l ++ )
	{
		for ( i = 0; i < len; i ++ )                     //i?????
			 huiwen(i,l,str);
	}
	return 0;
}
void huiwen( int pos, int l, char str[])
{
	int right, left, j;                                                          //left?????right????
	for ( left = pos, right = pos + l - 1; right > left; right --, left ++ )
		if ( str[left] != str[right] )                                          //?????????
			break;
	if ( left >= right )                                     //????
	{
		for ( j = pos; j < pos + l; j ++ )
			cout << str[j];
		cout << endl;
	}
}