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

//*************************************************
//***???????***
//***??????***
//***???2012.1.11***
//*************************************************
int main ()
{
	int i,j,k,flag;
	char a[501];
	cin >> a;
	for (i = 1; a[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			flag = 1;
			for (k = 0;j + i - k >= j + k; k++)
			{
				if (a[j + i - k] != a[j + k])
					flag = 0;
			}
			if (flag == 1)
			{
				for (k = 0; k <= i; k++)
					cout << a[j + k];
				cout << endl;
			}
		}
	}
	return 0;
}