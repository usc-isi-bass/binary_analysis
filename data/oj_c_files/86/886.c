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

//*************************************************************
//*  ????1000012846_6.cpp *********************************
//*  ????? ***********************************************
//*  ?????2010?11? *************************************
//*  ????????? ***************************************
//*************************************************************
int main()
{
	int i , j , n , a[100][20] , b[100] = {0} , c[100] , d[100] ;    
	//??????i,j??????n;??a,b,c,d
	cin >> n ; 
	for ( i = 0 ; i < n ; i++ )       //???????????
	{
		cin >> b[i] ;
		for ( j = 0 ; j < b[i] ; j++ )
			cin >> a[i][j] ;
	}
	for ( i = 0 ; i < n ; i++ ) 
		//???????????????????????c[];??????d[];       
	{
		d[i] = b[i] ;
		c[i] = a[i][b[i]-1] ;
		for ( j = 0 ; j < b[i] ; j++ )
		{
			if ( a[i][j] + j * 3 > 60 )
			{
				c[i] = a[i][j-1] ;
				d[i] = j ;
				break ;
			}
		}
	} 
	for ( i = 0 ; i < n ; i++ )     //?3?????
	{
		if ( b[i] == 0 )    //??????????
			cout << "60" << endl ;
		else if ( c[i] + d[i] * j > 60 )   //??????????????????????
			cout << c[i] << endl ;
		else           //?????????????????????60???
			cout << 60 - d[i] * 3 << endl ;
	}
	return 0;
}