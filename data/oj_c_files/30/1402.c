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
	int n,i,a,b,c;
	a=0;
	cin >> n;
	for (i = 1;i <= n;i++)
	{
		b = i / 10;
		c = i - (10 * b);
		if(i%7==0||b==7||c==7)
			continue;
		a = a + (i*i);
	}
	cout << a << endl;
	cin.get();
	cin.get();
	return 0;
}
