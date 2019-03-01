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
//*???2.cpp   **
//*?????? 1200012768 **
//*???2013.1.10  **
//*?????????  **
//********************************
int fun(int a)
{
	if (a <= 2)
		return 1;
	return fun(a - 1) + fun(a - 2);
} 
int main()
{
	int n, a;
	cin >> n;
	while (n--)
	{
		cin >> a;
		cout << fun(a) << endl;
	}
	return 0;
}
