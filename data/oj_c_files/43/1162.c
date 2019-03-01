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

//********************************
//*??????????? **
//*????? 1300012839 **
//*???2013.10.27**
//********************************
int main()
 {
	 int m,a,b,i,j;                                                  //m??????a?b?????i?j?????
	 cin >> m;
	 for( a = 3;a <= m/2;a+=2)                                       //a?3??????
	 {
			 for(i = 2;i < a;i++)                                    //??a?????
				 if(a % i == 0)break;
		     if( i == a )
		   {
			  b = m - a;                                             //??a??????b?????
			  for(j = 2;j < b;j++)                                    
				 if(b % j == 0)break;
		  	  if(b == j)cout << a << " " << b << endl;              //?????????a?b
		   }
	 }
		 return 0;
}