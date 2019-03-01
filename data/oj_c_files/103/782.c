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
	char str[1000], t;
	int i, count = 0;
	cin.getline(str,1000);
	int len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] >= 97)
			str[i] -= 32;
	}
	t = str[0];
	i = 0;
	while (i < len)
	{
		if (t == str[i])
			count++;
		else
		{
			cout << "(" << t << "," << count << ")";
			count = 1;
			t = str[i];
		}
		i++;
	}
	cout << "(" << t << "," << count << ")" << endl;
	return 0;
}