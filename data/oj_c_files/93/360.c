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


int main (void)
{
	int num = 0;
	cin >> num;

	if (!(num % 105))
		cout << "3 5 7" << endl;
	else if (!(num % 35))
		cout << "5 7"<< endl;
	else if (!(num % 21))
		cout <<"3 7"<<endl;
	else if (!(num % 15))
		cout << "3 5"<<endl;
	else if (!(num % 7))
		cout << '7'<<endl;
	else if (!(num % 5))
		cout << '5'<<endl;
	else if (!(num % 3))
		cout << '3'<<endl;
	else
		cout <<'n'<<endl;

	return 0;
}


