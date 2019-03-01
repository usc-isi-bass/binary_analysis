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
//*???6.cpp   **
//*????????????**
//*????? 1300012844 **
//*???2013.10.9  **
//********************************

int main()
{
 	int n; //????????n
	double x1, x2; //?????x1?x2
	double a, b, c, delta; //???????a?b?c????delta 
	
	cin >> n; //??n 
	
	for ( int i = 0; i < n; i++)
	{
	 	cin >> a >> b >> c; //????a?b?c
		
		delta = b * b - 4 * a * c; //?????delta
		
		if ( delta > 0 ) //??delta?????????? 
		   {   	 	   //??????x1,x2????0??-0????? 
 	   	   	 x1 = 0 + ( -b + sqrt(delta) ) / ( 2 * a ); 
			 x2 = 0 + ( -b - sqrt(delta) ) / ( 2 * a ); 
 	   	   	 cout <<fixed << setprecision(5);
 	   	   	 cout << "x1=" << x1 << ";x2=" << x2 << endl; //??x1?x2 
	   	   } 
	    else if ( delta < 0 ) //??delta?????????? 
	 		 {
			  	x1 = 0 + ( - b ) / (2 * a); //x1???? 
				x2 = fabs( sqrt(-delta) / (2 * a) ); //x2????
				cout << fixed << setprecision(5);
				cout << "x1=" << x1 << "+" << x2 << "i;";
				cout << "x2=" << x1 << "-" << x2 << "i" << endl;  //??x1?x2  		 
		  	 } 
	    else
			{
			   	x1 =  0 + ( - b ) / (2 * a); //?????????
				cout << fixed << setprecision(5);
				cout << "x1=x2=" << x1 << endl; //??x1?x2  			
	  		} 
	
	} 
	
	return 0;
}