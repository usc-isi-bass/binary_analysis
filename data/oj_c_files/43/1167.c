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


int main()
{
 	int m, x, y;
 	int a, b = 0;
 	int k, l;
 	
 	cin >> m;
 	
 	for (int i = 3; i <= m/2 ; i = i + 2)
 	{
	 	a = 0;
	 	
	 	for (k = 2; k*k <= i; k++)
	 	{
		 	if ( i % k == 0)
		 	   a = 1;
 	    }
	    
	    for (l = 2; l*l <= (m - i); l++)
	    {
		 	if (( m - i) % l == 0)
		 	   a = 1;
	
		 }	 
	 	 
	    if (a == 0)
	 	   cout << i << " " << m - i << endl;
 	    else
 	    	continue; 	  			

	 }
	 
	 return 0;

}