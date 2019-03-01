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

int main ()
{
	int number=0,x=0;
	cin >>number;
	while (number!=1)                                                          //??while?????1????
	{
		if (number%2==1)                                                       //??????
		{	
			x=number;
		    number=number*3+1;
			cout <<x <<"*3+1=" <<number <<endl;
		}
		else                                                                   //??????
		{
			x=number;
			number=number/2;
			cout <<x <<"/2="<<number <<endl;
		}
    }
	cout <<"End";                                                              //??End??

	return 0;
}