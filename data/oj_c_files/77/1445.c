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
	char a[100], char1, char2;
	int i, j;
	cin.getline(a, 100);
	char1 = a[0];
	for (i = 0; i < 100; i++)
		if (a[i] != a[0])
		{
			char2 = a[i];
			break;
		}
	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] == char2)
		{
			for (j = i; j >= 0; j--)
				if (a[j] == char1)
				{
					cout << j << " " << i << endl;
					break;
				}
			a[i] = ' ';
			a[j] = ' ';
		}
		i++;
	}
	return 0;
}