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

//* * * * * * * * * * * * * * * * */
//* ??:??????3?5?7??  */
//* ??:???                   */
//* ??:2012-10-07               */
//* ??:1200012957               */
//* * * * * * * * * * * * * * * * */
int main()
{
	int a, a3, a5, a7; 
	cin >> a;  //???????
	a3 = a % 3; 
	a5 = a % 5;
	a7 = a % 7; //??????3?5?7????????????
	if (a3 == 0)
		if (a5 == 0)
			if (a7 == 0)
				cout << "3 5 7" << endl; 
			else cout << "3 5" << endl;
		else 
			if (a7 == 0)
				cout << "3 7" << endl;
			else cout << "3" << endl;
	else
		if (a5 == 0)
			if (a7 == 0)
				cout << "5 7" << endl;
			else cout << "5" << endl;
		else
			if (a7 == 0)
				cout << "7" << endl;
			else cout << "n" << endl;
	
			//??????????????????????????????????????
	return 0;
}