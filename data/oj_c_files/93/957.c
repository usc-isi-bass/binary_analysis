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

//******************************************************************************
//****?????? ???1200012772  ???2012???3?                   *****
//****???2012?10?5?                                                  *****
//****?????3?5?7????                                            *****
//******************************************************************************
int main( )
{
	int a;                     //????a
	//cout << " ?????" << endl;
	cin >> a;    //????
	if( a % 3 == 0 && a % 5 == 0 && a % 7 == 0 )//??3,5,7??
		cout << "3" << " 5" << " 7" << endl;
	else if( a % 3 == 0 && a % 5 == 0 && a % 7 != 0 )//??3,5??
		cout << "3" << " 5" << endl;
	else if( a % 3 == 0 && a % 5 != 0 && a % 7 == 0 )//??3,7??
		cout << "3" << " 7" << endl;
	else if( a % 3 != 0 && a % 5 == 0 && a % 7 == 0 )//??5,7??
		cout << "5" << " 7" << endl;
	else if( a % 3 == 0 && a % 5 != 0 && a % 7 != 0 )//???3??
		cout << "3" << endl;
	else if( a % 3 != 0 && a % 5 == 0 && a % 7 != 0 )//???5??
		cout << "5" << endl;
	else if( a % 3 != 0 && a % 5 != 0 && a % 7 == 0 )//???7??
		cout << "7" << endl;
	else                                             //???3,5,7??
		cout << "n" << endl;
	return 0;
}
