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

//****************************************
//*???????                              **
//*????? 1100012925**
//*???2011.11.13                        **
//****************************************
void oushu( int n )   //??n????????
{
	cout << n << "/2=" << n / 2 << endl;

}

void jishu ( int n )  //??n????????
{
	cout << n << "*3+1=" << n * 3 + 1 << endl;
}

void jiaogu ( int n )
{
	if ( n % 2 ==0 )  //??n???
	{
		oushu ( n );  //??oushu??
		n = n / 2;
	 }
	else             //??n???
	{
		jishu ( n );  //??jishu??
		n = n * 3 + 1;
	}
	if ( n > 1 )     //n???????1
		jiaogu ( n ); //????jiaogu??
}

int main()
{
	int n;
	cin >> n;
    if ( n > 1 )         //?n??1
    	jiaogu ( n );    //??jiaogu??
    cout << "End" << endl;  //??n=1???�End�
	return 0;
}



