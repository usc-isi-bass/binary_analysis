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

void ji(int);
void ou(int);
int main()
{
	int n;
	cin >> n;
	if(n % 2 == 0)
		ou(n);
	if(n % 2 != 0)
		ji(n);
	return 0;
}
void ji(int n)
{
	if(n == 1)
		cout << "End";
	if(n != 1)
	{
		int x;
	    x = n * 3 + 1;
	    cout << n << "*" << 3 << "+" << 1 << "=" << x << endl;
		ou(x);
	}
}
void ou(int n)
{
	int y;
	y = n / 2;
	cout << n << "/" << 2 << "=" << y << endl;
	if(y % 2 == 0)
		ou(y);
	if(y % 2 != 0)
		ji(y);
}