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

// ??2?N?? 
int main()
{
	int i, j, n, a[100]; // i,j?????n?2????
	cin >> n;
	memset(a, 0, sizeof(a)); // ????
	a[0] = 1; // ???????1
	for (i = 0; i < n; i++) // n??2
	{
		for (j = 0; j < i + 1; j++) // ???2
			a[j] = a[j] * 2;
		for (j = 0; j < i + 1; j++) // ??
		{
			a[j + 1] += a[j] / 10;
			a[j] = a[j] % 10;
		}
	}
	i = 99; // ????????
	while (a[i] == 0) // ??????
		i--;
	for (j = i; j >= 0; j--) // ????
		cout << a[j];
	return 0;
}