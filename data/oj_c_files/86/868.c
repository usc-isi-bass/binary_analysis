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

// ?? ?? 1000062708
int main()
{
	int a, n, m, i, t, j, sum, flag;
	cin >> n;
	for(i = 0;i < n;i++)
	{
		flag = 0;
		cin >> m;
		for(j = 1;j <= m;j++)
		{
			cin >> a;
			if(flag == 0)
			{
				
				t =  a + 3 * j;
				if(t >= 63)
				{
					sum = 63 - 3 * j;
					flag = 1;
				}
				else if(t >= 60 && t < 63)
				{
					sum = a;
					flag = 1;
				}
				else 
				
					sum = 60 - 3 * j;
					
				
			}
		}
		if(m == 0) 
			sum = 60;
		cout << sum << endl;
	}
	return 0;
}



