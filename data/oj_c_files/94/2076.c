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

int main ()
{
	int a[510] = {0};
	int n, count, j, k, num, temp, i;
	cin >> n;
	count = 1;
	for (k = 1; k <= n; k++)
	{
		cin >> num;
		if (num % 2 == 1) 
		{
			a[count] = num;
			count++;
		}
	}
	count--;
	for (i = 1; i <= count; i++)
	{
		for (j = 1; j <= count - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	cout << a[1] ;
	for (i = 2; i <= count; i++)
	{
		cout << "," << a[i] ;
	}
	cout << endl;
	return 0;
}