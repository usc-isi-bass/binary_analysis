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
	char a[101] = {'\0'};
	cin.getline(a, 101, '\n');
	int len = strlen (a);
	char boy = a[0], girl = a[len -1];
	int i = 0, j = 0, k = 0;
	for (i = 1; i < len; i ++)
	{
		if(a[i] == girl)
		{
			for (j = i - 1; j >= 0; j --)
			{
				if(a[j] == boy)
				{
					cout << j << " " << i << endl;
					a[j] = '1';
					break;
				}
			}
		}
	}
	return 0;
}