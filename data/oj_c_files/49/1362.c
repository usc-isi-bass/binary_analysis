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
 	char str[510];
 	int len = 0, x, y;
 	
 	cin >> str;
 	len = strlen(str);
 	for ( int i = 1; i < len; i++ )
 	{
  	    for ( int j = 0; j < len - i; j++ )
  	    {
  		 	for ( x = j, y = j + i; x < y; x++, y-- )
  		 	{
	  	  	 	if ( str[x] != str[y] )
	  	  	 	   break;
			}

			if ( x >= y )
   			{
  	   		    for ( int m = j; m <= j + i; m++ )
  	   		    	cout << str[m];
  	   		    cout << endl;	
		 	}
  		}
  	}
  	return 0;
}