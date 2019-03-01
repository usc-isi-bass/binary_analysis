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


/*
???:Huiwen()
??:???????????,?????1,????0
**/
int Huiwen(char part[])
{
	char check[501];
	memset(check, 0, sizeof(check));
	int i, j, len;
	len = strlen(part);
	j = len - 1;
	for (i = 0; i < len; i++)
		check[j--] = part[i];
	check[len] = '\0';
	return (!(strcmp(part, check)));
}

int main()
{
	char input[501];
	char part[501];
	cin.getline(input, 500);
	int i, j, k, t, len, n;
	len = strlen(input);
	for (n = 2; n <= len; n++)
	{
		for (i = 0; i <= len - n; i++)
		{
			memset(part, 0, 501);
			part[0] = input[i];
			k = 1;
			for (j = i + 1; j < i + n; j++)
				part[k++] = input[j];
			part[k] = '\0';
			if (Huiwen(part))
			{
				for (t = 0; t < k; t++)
					cout << part[t];
				cout << endl;
			}
		}
	}
	return 0;
}
