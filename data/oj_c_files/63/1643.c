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

/*
??1
?? ????
?? ??? 1300012786 
*/
int main()
{
	int a[102][102], b[102][102], c[102][102];
	int n, q, m;
	cin >> n >> q;
	for(int i = 0; i <100; i++)
		for(int j = 0; j < 100; j++)
			c[i][j] = 0;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < q; j ++)
			cin >> a[i][j];
	cin >> q >> m;

	for(int i = 0; i < q; i++)
		for(int j = 0; j < m; j ++)
			cin >> b[i][j];

	for(int i = 0; i <n; i++)	
	{
		for(int j = 0; j < m; j++)	
		{
			for(int l = 0; l < q; l++)	
				c[i][j]	+= a[i][l] * b[l][j];
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m - 1; j++)	
			cout << c[i][j] <<" ";
		cout << c[i][m-1]<<endl;
	}
	return 0;	
}