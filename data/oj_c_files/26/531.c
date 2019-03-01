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
 * ???????.cpp
 *
 *  Created on: 2011-1-8
 *      Author: lenovo
 */
int main()
{
	char a[60];
	while (true)
	{
		int i=0;
	    if (!(cin.get(a[i]))) break;

	    if (a[i]==' ')
	    	{
	    	   while (true)
	    	   {
	    		   cin>>a[i+1];
	    		   if (a[i+1]!=' ')
	    		   {
	    			   cout<<' '<<a[i+1];
	    			   break;
	    		   }
	    		   i++;
	    	   }
	    	}
	    else
	    	cout<<a[i];
	    i++;
	}
	return 0;
}