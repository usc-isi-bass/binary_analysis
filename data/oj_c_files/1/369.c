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

int s(int, int);
int main()
{
	int n, i, a;
	cin >> n;
	for(i = 0;i < n;i++)
	{
		cin >> a;
		cout << s(a, 2)  << endl;                  // ??????b????2
	}
	return 0;
}
int s(int a, int b)
{
	int i, t = 0;
	for(i = b;i < a;i++)
		if(a % i == 0 && a / i >= i)              // ????????????????
			t = t + s(a / i, i);                   // ????????????
	return t + 1;
}