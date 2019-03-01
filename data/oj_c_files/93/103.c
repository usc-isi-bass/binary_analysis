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



int main()
{
	int N; cin >> N;
	if (N % 105 == 0) { cout << "3 5 7" << endl; return 0;}
	if (N % 15 == 0) { cout << "3 5" << endl; return 0;}
	if (N % 21 == 0) { cout << "3 7" << endl; return 0;}
	if (N % 35 == 0) { cout << "5 7" << endl; return 0;}
	if (N % 3 == 0) { cout << "3" << endl; return 0;}
	if (N % 5 == 0) { cout << "5" << endl; return 0;}
	if (N % 7 == 0) { cout << "7" << endl; return 0;}
	cout << "n" << endl;
	return 0;
}
