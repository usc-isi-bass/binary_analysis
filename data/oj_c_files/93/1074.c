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

//*******************************
//*project : 5.cpp**
//*author : ??? 1200012971**
//*time : 2012.10.4**
//*******************************
int main()                            //?????
{
	int a;                             //???????
	cin >> a;                         //????a 
	if ( a % 3 == 0 && a % 5 == 0 && a % 7 == 0)  //a??3?5?7???????
		cout << "3 5 7" << endl;
	else
	{
		if ( a % 15 == 0 || a % 35 == 0 || a % 21 == 0 )
		{
			if ( a % 3 == 0 && a % 5 == 0)     // ??a????3 5 7 ???????
			    cout << "3 5" << endl;
		    if ( a % 5 == 0 && a % 7 == 0)
			    cout << "5 7" << endl;
	      	if ( a % 3 == 0 && a % 7 == 0)
				cout << "3 7" << endl;
		}
		else
		{
			if ( a % 3 == 0)                //??a???3 5 7???????
				cout << "3" << endl;   
			if ( a % 5 == 0)
				cout << "5" << endl;
			if ( a % 7 == 0)
				cout << "7" << endl;
			if ( a % 3 != 0 && a % 5 != 0 && a % 7 != 0)
			    cout << "n" << endl;           //a???3 5 7??????????
		}
	}
	return 0;
}

