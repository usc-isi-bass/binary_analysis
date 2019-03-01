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

//****************************************
//*??:   ??13     ** 
//*??: ???      		    **
//*???2011  11 08              **
//****************************************
int main()
{
	char number[101];
	int a[101], lenth;
	int b[101] = {0} ;
	int  i , j , s;
	s = 0;
	cin >> number;
	lenth = strlen(number);
	for( i = 0 ; i <= lenth - 1 ; i ++)
		a[i] = number[i] - '0';

	for( i = 0 ; i <= lenth - 1 ; i ++)
	{
		s = s * 10 + (a[i] % 13);
		b[i] = s  / 13 ; 
		s = s % 13;
	}
	for( i = 0 ; i <= lenth - 1 ; i ++)
		if(b[i] != 0 ) break;
    
	if( i >= lenth)
		cout << 0;
    else
	{
		for( j = i ; j <= lenth - 1 ; j ++)
		cout << b[j];
	}
		cout << endl;
		cout << s << endl;
	
		return 0;
}