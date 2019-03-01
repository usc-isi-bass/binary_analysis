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
	char letter[40];
	int n, i, blank = 0, num = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		memset(letter, '0', sizeof(letter));
		cin >> letter;
		if (strlen(letter) + blank + num > 80)
		{
			blank = 0;
			num = 0;
			cout << endl;
		}
		if (blank)
			cout << ' ';
		cout << letter;
		num += strlen(letter) + blank;
		blank = 1;
	}
	return 0;
}