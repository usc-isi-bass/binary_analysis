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

void xun(int);
int main()
{
	int n, a, i;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> a;
		xun(a);
	}
	return 0;
}
void xun(int a)
{
	int i, b = 1, c = 1, d;
	if(a == 1 || a == 2)
		cout << "1" << endl;
	else
	{
		a --;
		for(i = 1; i < a; i++)
		{
			d = b;
			b = b + c;
			c = d;
		}
		cout << b << endl;
	}
	return ;
}