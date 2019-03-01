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

//********************************
//*???????   **
//*?????? 1300012934 **
//*???2013.11.6  **
//********************************


int main()
{  
	int n, m, s;
	char a[102][102];//??????????

	cin >> n;
	s = 0;
	for (int i = 1; i <= n ; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j]; 
		}
	}
	cin >> m;
	if (m != 1)
	{
		for (int k = 2; k <= m; k++)
		{
			for (int i = 1; i <= n; i++)
			{
				for (int j = 1; j <= n; j++)
				{
					if(a[i][j] == '@') //????
					{
						if (a[i-1][j] != '#' && a[i-1][j] != '@')
							a[i-1][j] = '!'; //!??????????
						if (a[i+1][j] != '#' && a[i+1][j] != '@')
							a[i+1][j] = '!';
						if (a[i][j-1] != '#' && a[i][j-1] != '@')
							a[i][j-1] = '!';
						if (a[i][j+1] != '#' && a[i][j+1] != '@')
							a[i][j+1] = '!';
					}
				}
			}
			for (int i = 1; i <= n; i++)
			{
				for (int j = 1; j <= n; j++)
				{
					if (a[i][j] == '!')
						a[i][j] = '@'; //???????????????????
				}
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (a[i][j] == '@')
				s++;
		}
	}
	cout << s;

	return 0;

}
