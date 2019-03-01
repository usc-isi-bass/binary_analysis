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
	char input[1001] = {0};
	cin >> input;
	int i, count = 0;
	char c = toupper(input[0]);
	for (i = 0; i < strlen(input); i++)
	{
		if (input[i] == c || toupper(input[i]) == c)
			count++;
		else
		{
			cout << '(' << c << ',' << count << ')';
			count = 1;
			c = toupper(input[i]);
		}
	}
	cout << '(' << c << ',' << count << ')' << endl;
	return 0;
}