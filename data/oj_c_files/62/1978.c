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
	char input[100];
	int i;
	int flag[100] = {0}, length;
	cin.getline(input, 100);
	length = strlen(input);
	cout << input[0];
	for (i = 1; i < length; i++)
	{
		if (input[i] == ' ' && input[i - 1] == ' ')
		{
				continue;
		}
		cout << input[i];
	}
	return 0;
}