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
	int num[100001], size, i, r, k, del;
	cin >> size;
	for (i = 1; i <= size; i++)
	{
		cin >> num[i];
	}
	cin >> del;
	for (i = 1; i <= size; i++)
	{
		if (num[i] == del)
		{
			size--;
			for (r = i; r <= size; r++)
			{
				num[r] = num[r + 1];
			}
			i--;
		}
	}
	for (i = 1; i <= size; i++)
	{
		cout << num[i];
		if (i == size)
		{
			cout << endl;
		}
		else 
		{
			cout << " ";
		}
	}
	return 0;
}
