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
	cin.getline(str, 100);
	char result[101];
	char * p = str;
	int flag = 1; // shifirst
	int i;
	for (i = 0;* p != '\0'; p++)
	{
		if (* p != ' ')
		{
			result[i++] = * p;
			flag = 1;
		}
		else if (flag)
		{
			flag = 0;
			result[i++] = * p;
		}
	}
	result[i] = '\0';
	cout << result << endl;
	return 0;
}