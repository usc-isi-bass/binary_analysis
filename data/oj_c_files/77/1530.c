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





int leave(int a);

	char str[101];
		int i = 1;

int main()
{

	cin.getline(str, 101);
	leave(0);
	return 0;
}
int leave(int a)
{
	int b;

	if (str[a] == str[0])
	{
		b = leave(a + 1);
		cout << a << " " << b << endl;
		return leave(b + 1);
	}
	else
		return a;
}


