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

//********************************
//*?????3,5,7????   **
//*????? 1300012845 **
//*???2013.9.27  **
//********************************
int main()//???
{
	int n,x;
	x=0;
	cin>> n;
	if (n%3==0)//?????3??
		x=x+3;
	if (n%5==0)//?????5??
		x=x+5;
	if (n%7==0)//?????7??
		x=x+7;
	if (x==0) cout << "n" << endl;//??x???????
	if (x==3) cout << "3" << endl;
	if (x==5) cout << "5" << endl;
	if (x==7) cout << "7" << endl;
	if (x==8) cout << "3 5" << endl;
	if (x==10) cout << "3 7" << endl;
	if (x==12) cout << "5 7" << endl;
	if (x==15) cout << "3 5 7" << endl;
	return 0;
}
