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
	char currChar, lastChar;
	int lastCount = 1;
	cin >> lastChar;
	if (lastChar <= 'z' && lastChar >= 'a')
		lastChar += 'A' - 'a';
	while (cin >> currChar)
	{
		if (currChar <= 'z' && currChar >= 'a')
			currChar += 'A' - 'a';
		if (currChar != lastChar)
		{
			cout << '(' << lastChar << ',' << lastCount << ')';
			lastCount = 1;
			lastChar = currChar;
		}
		else
			lastCount++;
	}
	cout << '(' << lastChar << ',' << lastCount << ')';
	return 0;
}