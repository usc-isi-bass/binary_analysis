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
	int length = 1, i, len;
	char q, data[1000];
	cin >> data;
	len = strlen(data);
	for (i = 0; i < len; )
	{
		q = data[i];
		if (data[i] > 96)
		{
			q -= 32;
		}
		length = 0;
		do
		{
			length++;
		}while (data[i + length] == q || data[i + length] == q + 32);
		cout << "(" << q << "," << length << ")";
		i += length;
	}
	cout << endl;
	return 0;
}