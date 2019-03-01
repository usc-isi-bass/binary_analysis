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
	int n, i, j, a[20005], b[20005] ={0};
	cin >> n;
	for(i = 0; i < n; i++)
		cin >> a[i];
	for(i = 0; i < n; i++)
	{
		for(j = 0; b[j] != 0; j++)
		{
			if(b[j] == a[i])
				break;
		}
		if(b[j] == 0)
			b[j] = a[i];
	}
	cout << b[0];
	for(i = 1; b[i] != 0; i++)
	{
		cout << " " << b[i];
	}

	return 0;
}