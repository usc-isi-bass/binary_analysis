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
	int a[1001], b[1001], num = 1, i, j, temp = 0, max = 0;
	char c;
	do 
	{
		cin >> a[num];
		cin.get(c);
		num++;
	}while (c == ',');
	num = 1;
	do 
	{
		cin >> b[num];
		cin.get(c);
		num++;
	}while (c == ',');
	cout << num - 1;
	num--;
	for (i = 0; i < 1000; i++)
	{
		for (j = 1; j <= num; j++)
		{
			if (i >= a[j] && i < b[j])
				temp++;
		}
		if (max < temp)
			max = temp;
		temp = 0;
	}
	cout << ' ' << max << endl;
	return 0;
}