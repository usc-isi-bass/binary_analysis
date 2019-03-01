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
	int a[100][100], n, i, j, m, k, sum, min;
	cin >> n;
	for(m = 1 ; m <= n ; m ++)
	{
		memset(a, 0, sizeof(a));
		sum= 0;
		for(i = 0 ; i < n ; i ++)
			for(j = 0 ; j < n ; j ++)
				cin >> *(*(a + i) + j);
		for(k = 0 ; k < n - 1 ; k ++)
		{
			
			for(i = 0 ; i < n - k ; i ++)
			{
				min = 100000;
				for(j = 0 ; j < n - k ; j ++)
				{
					if(*(*(a + i) + j) < min) min = *(*(a + i) + j);
				}
			    for(j = 0 ; j < n - k ; j ++)
					*(*(a + i) + j) -= min;
			}
			
			for(i = 0 ; i < n - k ; i ++)
			{
				min = 100000;
				for(j = 0 ; j < n - k ; j ++)
				{
					if(*(*(a + j) + i) < min) min = *(*(a + j) + i);
				}
			    for(j = 0 ; j < n - k ; j ++)
					*(*(a + j) + i) -= min;
			}
			sum += *(*(a + 1) + 1);
			for(i = 1 ; i < n ; i ++)
				for(j = 0 ; j < n ; j ++)
					*(*(a + i) + j) = *(*(a + i + 1) + j);
			for(i = 1 ; i < n ; i ++)
				for(j = 0 ; j < n ; j ++)
					*(*(a + j) + i) = *(*(a + j) + i +1);
			
		}
		cout << sum << endl;
	}
	return 0;
}

