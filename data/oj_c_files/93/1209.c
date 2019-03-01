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

//**************************
//*??3?5?7????**
//*?? : ?? 1300012761**
//*?? : 2013.10.03**
//**************************
int main()
{
	int a ;//????
	cin >> a ;//??a
	if ((a%3==0&&a%5==0&&a%7==0)==1)//??????3?5?7??
		cout << "3 5 7" <<endl;
	if ((a%3==0&&a%5==0&&a%7!=0)==1)//??????3?5??
		cout << "3 5" << endl;
	if ((a%3==0&&a%5!=0&&a%7==0)==1)//??????3?7??
		cout << "3 7" << endl;
	if ((a%3!=0&&a%5==0&&a%7==0)==1)//??????5?7??
		cout << "5 7" << endl;
	if ((a%3==0&&a%5!=0&&a%7!=0)==1)//??????3??
		cout << "3" << endl;
	if ((a%3!=0&&a%5==0&&a%7!=0)==1)//??????5??
		cout << "5" << endl;
	if ((a%3!=0&&a%5!=0&&a%7==0)==1)//??????7??
		cout << "7" << endl;
	if ((a%3!=0&&a%5!=0&&a%7!=0)==1)//???????3?5?7??
		cout << "n" << endl;
	return 0;
}
