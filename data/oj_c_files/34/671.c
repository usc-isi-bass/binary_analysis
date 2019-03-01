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

//************************************
//????1000012825                 *
//??????                       *
//???12.5                         *
//?????????                 *
//************************************
void f( int );     //????
int main ()
{
	int n;
	cin >> n;
	if ( n == 1 )
		cout << "End" << endl; //????1???????
	else
		f(n);   //????
	return 0;
}
void f( int n)
{
	int p = n;
	if (p == 1)
	{
		cout << "End"  << endl;
		return;
	}
	else if ( p % 2 == 0 )
	{
		cout << p << "/2=" << p / 2 << endl; // ?????2??????
		f( p / 2 );
	}
	else
	{
		cout << p << "*3+1=" << p*3+1 << endl;
		f( 3* p + 1);
		
	}
}






