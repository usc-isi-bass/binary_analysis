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

//*******************************************************************
//*??????????????? ***********************************
//*??????? 1200012979 ****************************************
//*???2012.11.13 *************************************************
//*******************************************************************
int main()
{
	int a[100] , b[100]={0} , i , p , t ; //a????????b?????t???
	char num[100] ;                  //num????
	cin >> num ;
	p = strlen(num) ;               //???????
	for ( i = 0 ; i < p ; i++ )
	  a[i] = num[i] - '0' ;         //???????
	if ( p > 1 )
	{
      for ( i = 1 ; i < p ; i++ )     //??????
	  {
		if ( i >= 2 )               //????????????????????
		{
		   if ( a[i-2] == 0 )
		   {
             b[i] = ( a[i-1] * 10 + a[i] ) / 13 ; //???????
             t = ( a[i-1] * 10 + a[i] ) % 13 ; //t???
			 a[i] = t % 10 ;
             a[i-1] = t / 10 ; 
		   }
	       else
		   {
			  t = ( a[i-2] * 100 + a[i-1] * 10 + a[i] ) % 13 ;
			  b[i] = ( a[i-2] * 100 + a[i-1] * 10 + a[i] ) / 13 ;
		 	  a[i] = t % 10 ;
              a[i-1] = t / 10 ;
			  a[i-2] = 0 ;
		   }
		}
		else                       //??????????????????
		{
			b[i] = ( a[i-1] * 10 + a[i] ) / 13 ;
			t = ( a[i-1] * 10 + a[i] ) % 13 ;
			a[i] = t % 10 ;
            a[i-1] = t / 10 ;
		}
	  }
     if ( b[1] == 0 && p > 2 )
		i = 2 ;
	 else 
		i = 1 ;
	 for ( ; i < p ; i++ )
	  cout << b[i] ;                //????
	  cout << endl ;
	  cout << t << endl;                 //????
	}
	 else
	{
		cout << "0" << endl;
		cout << num[0] << endl;
	}
	return 0;
}