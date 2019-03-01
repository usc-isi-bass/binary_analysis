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
	char str[101];
	int num[100], i, sum, rem = 0;
	cin.getline(str,101);
	for(i = 0; str[i] != '\0'; i++)
	{
		num[i] = str[i] - '0';
	}
	rem = num[0];
	for(i = 1; str[i] != '\0'; i++)
	{
		sum = rem * 10 + num[i];
		if (i != 1 || sum > 12)
			cout << sum / 13;
		rem = sum % 13;
	}
	if (i == 1 || (i == 2 && sum <= 12))
		cout << '0';
	cout << endl;
	cout << rem << endl;
	return 0;
}