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

//******************************
//**???????
//**?????  1100017658
//**???2011.11.13
//******************************
void out(int[], char[], int);                   // ?????
int main()                                      // ?????
{
	char a[500];
	int k[500] = {0};                           // ???????????
	cin >> a;
	int t = strlen(a);                          // ?????
	for (int x = 0; x < t; x++)
		if (a[x] - 'a' == a[x + 1] - 'a')
		{
			k[x] = 1;                           // ??
			cout << a[x] << a[x + 1] << endl;   // ???????
		}
    out(k, a, t);                               // ?????
	return 0;
}                                               // ?????

void out(int k[], char a[], int t)              // ???
{
    for (int m = 1; m < t / 2; m++)             // ????
	{
		for (int i = 0; i < t; i++)             // ??
		{
			if (k[i] == 1)                      // ???????
			{
				int flag = 0;                   // ??
				int l = 1;
				for (; l <= m; l++)             // ???????
				{
					if (a[i - l] - 'a' != a[i + l + 1] - 'a') // ??????
						flag = 1;
				}
				if (flag == 0 && l == m + 1)                // ????
				{
					for (int q = i - m; q <= i + m + 1; q++) // ????
						cout << a[q];
					cout << endl;
				}
			}
		}
	}
	return;                                     // ??
}                                               // ?????
