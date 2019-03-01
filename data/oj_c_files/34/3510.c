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
//*???1.cpp   **
//*?????? 1200012768 **
//*???2012.11.  **
//*???????  **
//********************************
int num(int n);
int main()
{
	int n;
	cin >> n;
	while (n != 1)
		n = num(n);
	cout << "End\n"; 
	return 0;
}
int num(int n)
{
	if (n % 2 == 0)
	{
		cout << n << "/2=" << n / 2 << endl;
		return n / 2;
	}
	else
	{
		cout << n << "*3+1=" << n * 3 + 1 << endl;
		return n * 3 + 1;
	}
}