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

//*******************************************************
//*       ????1000012846_1.cpp                      *
//*       ?????                                    *
//*       ?????2010?11?                          *
//*       ?????????                            *
//*******************************************************
int main()
{
	int a[5][5];
	int i = 0 , j = 0 , i1 = 0 , j1 = 0 , m = 0 ;
	for( i = 0 ; i < 5 ; i++ )
	{
		for( j = 0 ; j < 5 ; j++ )                       //??????
			cin >> a[i][j] ;
	}
	for( i1 = 0 ; i1 < 5 ; i1++ )
	{
		for( j1 = 0 ; j1 < 5 ; j1++ )
		{
			if( a[i1][j1] >= a[i1][0] && a[i1][j1] >= a[i1][1] && a[i1][j1] >= a[i1][2] && a[i1][j1] >= a[i1][3] && a[i1][j1] >= a[i1][4] )          //????
				if( a[i1][j1] <= a[0][j1] && a[i1][j1] <= a[1][j1] && a[i1][j1] <= a[2][j1] && a[i1][j1] <= a[3][j1] && a[i1][j1] <= a[4][j1] )      //????
				{
					cout << i1 + 1 << " " << j1 + 1 << " " << a[i1][j1] << endl ;               //??   
					m++;
					break;
				}
			if( m != 0 )
				break;
		}
		if( m != 0 )
			break;
	}
	if( m == 0 ) 
		cout <<  "not found" << endl;                                               //??
	return 0;
}