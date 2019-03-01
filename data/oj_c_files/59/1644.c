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

//***************************
//*???????          **
//*????? 1300012921   **
//*???2013.11.05        **
//*************************** 
int main()

{
	char a[101][101];
	int n;
	
	cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
			
	int m;
	cin >> m;
	for(int day = 2; day <= m; day++)
	{
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				if(a[i][j] == '@')
				{
					if((i - 1) >= 1 && a[i-1][j] != '#' && a[i-1][j] != '@')
					{
						a[i-1][j] = ',';
					}
					if((i + 1) <= n && a[i+1][j] != '#' && a[i+1][j] != '@')
					{
						a[i+1][j] = ',';
					}
					if((j - 1) >= 1 && a[i][j-1] != '#' && a[i][j-1] != '@')
					{
						a[i][j-1] = ',';
					}
					if((j + 1) <= n && a[i][j+1] != '#' && a[i][j+1] != '@')
					{
						a[i][j+1] = ',';
					}
				}
			}
		}
		
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				if(a[i][j] == ',')
					a[i][j] = '@';
			}
		}
	}
	
	int num = 0;
	for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				if(a[i][j] == '@')
					num += 1;
			}
		}
	
	cout << num << endl;
	return 0;
 } 