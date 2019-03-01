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

/*
????????
??????
?????2010?12?
???????????????
**/

void f(int n);
int main ()
{
	int n;
	cin >> n;
	f(n); //????f
	return 0;
}
void f(int n)
{
	int m;
	if(n == 1) //?????n?1
		cout << "End";
	else
	{
		if(n % 2 == 0)
		{
			m = n / 2;
			cout << n << "/" << 2 << "=" << m << endl; //??n???,??"n/2=m"???
		}
		else
		{
			m = 3 * n + 1;
			cout << n << "*" << 3 << "+" << 1 << "=" << m << endl; //??n??????"n*3+1=m"???
		}
		f(m); //??
	}
	return;
}