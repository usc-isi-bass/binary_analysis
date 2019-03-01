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

//****************************
//??????????????
//?????? 1300012849
//???2013?10?14?
//****************************


int main ()
{
int n , i ;                                      //??????n
double a , b , c ;                               //????????????????a?b?c
double delta , x1 , x2 , k1 , k2;                //????delta?????x1,x2 ?k1, k2?????????????

cin >> n ;                                       //????????n

for ( i = 1 ; i <= n ; i++ )                     //?n???
{
     cin >> a >> b >> c ;                        //????a?b?c
     delta = b * b - 4 * a * c ;                 //?????
    
	 if ( delta > 0 )                            //??????0????????????????
     {
         x1 = ( -b + sqrt ( delta ) ) / ( 2 * a ) ;
         x2 = ( -b - sqrt ( delta ) ) / ( 2 * a ) ;
        
		 if ( x1 < 0.000001 && x1 > -0.000001)   //???????-0.00000??0.00000????
		 {x1 = 0 ;}
	    		 cout<< fixed ;                          //???????????????5??????????
	     cout << setprecision(5) << "x1="<< x1 <<";"<< "x2="<< x2 << endl ;
	 }
     
	 else if ( delta == 0 )                      //??????0????
     {
		 x1 = -b / ( 2 * a ) ;
         x2 = -b / ( 2 * a ) ;
		 
		 if ( x1 < 0.000001 && x1 > -0.000001)
			x1 = 0 ;
	     if ( x2 < 0.000001 && x1 > -0.000001)
			x2 = 0 ;
		 cout << fixed ;
         cout << setprecision(5) << "x1=x2="<< x1 << endl ;
	 }

     
     else if ( delta < 0 )                      //??????0??????????
     {
         k1 = -b / ( 2 * a ) ;
         k2 = sqrt ( -delta) / ( 2 * a ) ;
         
		 if ( k1 < 0.000001 && k1 > -0.000001)
			k1 = 0 ;
	     if ( k2 < 0.000001 && k1 > -0.000001)
			k2 = 0 ;
		 cout << fixed;   
         cout <<setprecision(5)<<"x1="<< k1 << "+"<< k2 << "i;x2="<<k1 <<"-"<< k2 << "i"<<endl ;
     }
    
}
return 0 ;                                      //?????????0
}