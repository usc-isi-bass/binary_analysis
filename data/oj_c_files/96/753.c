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
	char num[100];
	int a, b, len;
	cin >> num;                //????
	len = strlen(num);
	if (len == 1)
		cout << '0' << '\n' << num[0];
	else
	{
		a = ((num[0] - '0') * 10 + (num[1] - '0')) / 13;
		b = ((num[0] - '0') * 10 + (num[1] - '0')) % 13;
		if (a != 0 || len == 2)
			cout << a;
		for (int i = 2; num[i] != '\0'; i++)
		{
			a = (b * 10 + (num[i] - '0')) / 13;
			b = (b * 10 + (num[i] - '0')) % 13;
			cout << a;
		}
		cout << '\n' << b << endl;
	}
	return 0;
}