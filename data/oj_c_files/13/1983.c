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
	int n, i, num[20010], m;
	cin >> n;
	m = n;
	for(i = 0; i < n; i++ )
		cin >> num[i];
	for(i = 0; i < n; i++)
	{
		int j;
		for(j = i + 1; j < n; j++ )
		{
			if(num[j] == num[i] && num[j] != 0)
			{
				num[j] = 0;
				m--;
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		if(num[i] != 0)
		{
			m--;
			if(m > 0)
				cout << num[i] << " ";
			else
				cout << num[i] << endl;
		
		}
	}
	return 0;
}
		
