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

/*
 * compare2.cpp
 *
 *  Created on: 2012-10-28
 *      Author: Administrator
 */
int main ()
{
	int a,b,c;
	int sum1 = 0 , sum2 = 0 , sum3 = 0 ;
	a = 1 ; b = 2 ; c = 3 ;
	sum1 = (b > a)+(a == c)+ a ;
    sum2 = (a > b)+(a > c)+ b ;
	sum3 = (c > b)+(b > a)+ c ;
	if(sum1 == 3 && sum2 == 3 && sum3 == 3)
    {
		cout <<"A"<<"B"<<"C";
	}
	else
	    a = 1 ; b = 3 ; c = 2 ;
	    sum1 = (b > a)+(a == c)+ a ;
	    sum2 = (a > b)+(a > c)+ b ;
		sum3 = (c > b)+(b > a)+ c ;
		if(sum1 == 3 && sum2 == 3 && sum3 == 3)
	    {
			cout<<"A"<<"C"<<"B";
		}
		else a = 2 ; b = 1 ; c = 3 ;
		sum1 = (b > a)+(a == c)+ a ;
	    sum2 = (a > b)+(a > c)+ b ;
	    sum3 = (c > b)+(b > a)+ c ;
	    if(sum1 == 3 && sum2 == 3 && sum3 == 3)
	    {
	    	cout<<"B"<<"A"<<"C";
	    }
	    else a = 2 ; b = 3 ; c = 1 ;
	    sum1 = (b > a)+(a == c)+ a ;
	    sum2 = (a > b)+(a > c)+ b ;
	    sum3 = (c > b)+(b > a)+ c ;
	    if(sum1 == 3 &&  sum2 == 3 && sum3 == 3)
	    {
	    	cout<<"C"<<"A"<<"B";
	    }
	    else a = 3 ; b = 2 ; c = 1 ;
	    sum1 = (b > a)+(a == c)+ a ;
	    sum2 = (a > b)+(a > c)+ b ;
 		sum3 = (c > b)+(b > a)+ c ;
 		if(sum1 == 3 &&  sum2 == 3 &&  sum3 == 3)
 		{
 			cout<<"C"<<"B"<<"A";
 		}
 		else
 		{
 			a = 3 ; b = 1 ;c = 2 ;
 		   sum1 = (b > a)+(a == c)+ a ;
 	       sum2 = (a > b)+(a > c)+ b ;
 		   sum3 = (c > b)+(b > a)+ c ;
 		  if(sum1 == 3 &&  sum2 == 3 && sum3 == 3)
 		  {
 			cout<<"B"<<"C"<<"A";
 		  }
 		}
	   return 0 ;
}