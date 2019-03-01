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
	char str[1000];
	cin >> str;
	int i, n, count = 1;
	n = strlen(str);
	for(i = 0; i < n; i++)
	{
		if(str[i] - 'a' >= 0 && str[i] - 'z' <= 0)
			str[i] = str[i] - 'a' + 'A';
	}
	for(i = 0; i < n - 1; i++)
	{
		if(str[i] == str[i + 1])
			count++;
		else
		{
			cout << "(" << str[i] << "," << count << ")";
			count = 1;
		}
	}
	if(str[n - 2] == str[n - 1])
		cout << "(" << str[n - 1] << "," << count << ")";
	else cout << "(" << str[n - 1] << "," << count << ")";

	return 0;
}
	