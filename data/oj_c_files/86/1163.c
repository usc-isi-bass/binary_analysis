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
	int n, a[100], b[100][20], i, j, flag = 0;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
		for(j = 0; j < a[i]; j++)
			cin >> b[i][j];
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < a[i]; j++)
		{
			if((b[i][j] + j * 3 + 3) >= 60)
			{
				if((b[i][j] + j * 3) < 60)
					cout << b[i][j] << endl;
				else
					cout << 60 - j * 3 << endl;
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			cout << 60 - j * 3 << endl;
		}
		flag = 0;
	}
	return 0;
}