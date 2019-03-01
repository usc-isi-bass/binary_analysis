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
//*????                     **
//*????? 1300012848        **
//*???2013.11.1              **
//********************************
int main()
{
	int n, m,a[101][101] = {0};
	char room[101][101];
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> room[i][j];
	cin >> m;
	for (int day = 1; day < m; day++)
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (room[i][j] == '@' && a[i][j] == 0)
				{
					if (room[i+1][j] == '.')
					{
						room[i+1][j] = '@';
						a[i+1][j] = 1;
					}
					if (room[i][j+1] == '.')
					{
						room[i][j+1] = '@';
						a[i][j+1] = 1;
					}
					if (room[i-1][j] == '.')
					{
						room[i-1][j] = '@';
						a[i-1][j] = 1;
					}
					if (room[i][j-1] == '.')
					{	
						room[i][j-1] = '@';
						a[i][j-1] = 1;
					}
				}
		memset(a,0,sizeof(a));
	}
			
	int cnt = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (room[i][j] == '@')
				cnt++;
	cout << cnt << endl;
	return 0;
}