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
	do
	{
		int n, m, a[500], flag, i, num = 0; 
		cin>>n>>m;
		flag = n;
		if(n == 0 && m == 0)
			break;
		for (i = 1; i <= n; i++)
		{
			a[i] = 1;
		}
		for (i = 1; i <= n; i++)
		{
			if (a[i] != 0)
			{
				num++;
				if (num == m)
				{
					if (flag != 1)
					{
						a[i] = 0;
						num = 0;					
						flag -= 1;
					}
					else
						break;
				}
			}
			if (i == n)
				i = 0;

		}

		for (i = 1; i <= n; i++)
		{
			if (a[i] == 1)
				cout<<i<<endl;
		}
	}while(1);
	return 0;
}

