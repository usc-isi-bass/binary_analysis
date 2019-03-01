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

//**********************************
//*?????3?5?7???? **
//*?????? 1300012722 **
//*???2013.9.27 **
//**********************************
int main()
{
	int x;

	cin >> x;                               //????

	if(x%3==0)                              //????????3????
	{
		cout << "3" ;           
	    if(x%5==0 )                         //????????5??
		cout << " 5" ;             
        if(x%7==0)                          //????????7??
		cout << " 7" ;   
	}

	else if(x%5==0)                         //????????5??
	{
		cout << "5" ;
		if(x%7==0)                          //????????7??
			cout << " 7" ;
	}
	else if(x%7==0)                         //????????7??
		cout << "7";
	else 
		cout << "n";

	cout << endl;

	return 0;
}


