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

//??????//
//??????//
//???1000011029//
//???2010?11?20?//



int main()
{
	int a = 0;                                           //??????a???//
	int b = 0;                                           //??????b???//
	int c = 0;                                           //??????c???//
	char temp[3];                                        //??????????//

	for( a = 0;a < 3;a++ )                               //??????2????0//
		for( b = 0;b < 3;b++)                            //?????????//
			for( c = 0;c < 3;c++ )
			{
				if( ( b > a ) + ( c == a ) == 2 - a
					&& ( b < a ) + ( a > c ) == 2 - b
					&& ( c > b ) + ( b > a ) == 2 - c )     //????????//
				{
					temp[a] = 'A';                          //??????//
					temp[b] = 'B';
					temp[c] = 'C';

					cout << temp[0] << temp[1] << temp[2] ; //?????//
				}

			}



	return 0;

}
