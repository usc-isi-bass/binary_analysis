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

//***********************************************************************
//* ×÷&Ograve;&micro;&pound;&ordm;&Auml;&Uuml;±&raquo;3,5,7&Otilde;&ucirc;&sup3;&yacute;&micro;&Auml;&Ecirc;&yacute;                                             *
//* ×÷&Otilde;&szlig;&pound;&ordm;&Aring;&Euml;&ordm;&ccedil;                                                          *
//* &Ecirc;±&frac14;&auml;&pound;&ordm;2013.09.28                                                    *
//***********************************************************************
int main()
{
	int num, i, a[3];
	cin  >> num;
	i = 0;
	
	if (num % 3 == 0) 
	{
		a[i] = 3;
		i ++;
	}
	if (num % 5 == 0)
	{
        a[i] = 5;
		i ++;
	}
	if (num % 7 == 0)
    {
		a[i] = 7;
	    i++;
	}
	i --;



	if (i == -1 )
		cout << "n";
	else
	{
		for (int j=0; j<= i; j++) 
		{
		    cout << a[j];
		    if (j < i)
			    cout << " ";
		}
	}

	return 0;
}

		
	

