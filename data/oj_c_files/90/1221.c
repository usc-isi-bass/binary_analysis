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

int num = 0;
int fenpei(int a, int b)
{
	if(b == 0 || a < 0 )
		return 0;
	if(a == 1 || a == 0 || b == 1)
		return 1;
	return fenpei(a , b - 1) + fenpei(a - b , b);
}
int main()
{
	int i = 0;
	cin >> i;
	while(i > 0)
	{
		int panzi = 0, apple = 0;
		cin >> apple >> panzi;
		cout << fenpei(apple,panzi) << endl;
		i--;
	}
	return 0;
}