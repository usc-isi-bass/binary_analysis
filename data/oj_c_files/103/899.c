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
	char str[1001];
	int i, len, count;
	cin >> str;
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	i = 0;
	while (i < len)
	{
		count = 1;
		while (str[i+1] == str[i] && i < len)
		{
			i++;
			count++;
		}
		cout << "(" << str[i] << "," << count << ")";
		i++;
	}
	return 0;
}