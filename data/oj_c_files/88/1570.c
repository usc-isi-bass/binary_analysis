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
//*  ???1000012846_3.cpp  *****************************
//*  ??:??  ******************************************
//*  ?????2010?12?  *******************************
//*  ?????????  *********************************
//********************************************************
int main()
{
	char a[31] ;
	cin.getline ( a , 31 ) ;
	int i = 0 ;                  //i??????
	while ( a[i] != '\0' )
	{
		if ( a[i] >= '0' && a[i] <= '9' )
		{
			char *p = &a[i] ;             //???????????
			while ( a[i] >= '0' && a[i] <= '9' )
				i++ ;
			a[i] = '\0' ;             //????????
			cout << p<< endl ;
		}
		i++ ;
	}
	return 0;
}