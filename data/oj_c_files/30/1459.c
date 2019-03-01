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

//***********************************
//*????7????????1045? **
//*?????? 1200012945         **
//*???2012.10.8                 **
//***********************************

int main()                          
{                                         
	
	int i, sum, n;
	cin >> n;
	sum = 0;
	for (i = 1; i <= n; i++)
	{if (i % 7 !=0)
	if ((i - 7) % 10 != 0)
	if (i - 70 < 0 || i - 70 >= 10)
	sum = sum + i * i;}
	cout << sum << endl;
	return 0;                        

}                       