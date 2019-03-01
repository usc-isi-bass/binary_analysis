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

//****************************************************
//*  ????1000012846_2.cpp  ***********************
//*  ?????  *************************************
//*  ????:2010?12?  ****************************
//*  ???????2?N??  *************************
//****************************************************
//???????????Cheng,?????????????str[]??????????N
void Cheng ( char str [40] , int N )
{
	if ( N == 1 )        //????????
		cout << str ;
	else if ( N > 1 )    //??????2???
	{
		int num1[40] = {0} , num2[40] , len = 0 , i = 0 , k = 40 ;
		len = strlen(str) ;
		for ( i = 0 ; i < len ; i++ )         //?????????????
			num1[i] = str[len-1-i] - '0' ;    
		for ( i = 0 ; i < 40 ; i++ )    //????
			num2[i] = num1[i] * 2 ;
		for ( i = 0 ; i < 40 ; i++ )     //????
		{
			if ( num2[i] > 9 )
			{
				num2[i] -= 10 ;
				num2[i+1] += 1 ;
			}
		}
		while ( num2[k-1] == 0 )      //???????????????
			k-- ;
		for ( i = 0 ; i < k ; i++ )     //?????????????
			str[i] = num2[k-1-i] + '0' ;
		str[k] = '\0' ;     
		Cheng(str,N-1) ;    //??????
	}
}
int main()
{
	char str[40] = "2" ;  //????????
	int N ;
	cin >> N ;
	if ( N == 0 )       //?N=0?????1
		cout << "1" << endl ;
	else
		Cheng ( str , N ) ;   //????
	return 0 ;
}
