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

//fanzhi
int a[10][10] = {0};
void fanzhi();
int main()
{
	int m, n;
	cin >> m >> n;
	a[5][5] = m;
	for(int i = 0; i < n; i++)
		fanzhi();
	for(int i = 1; i <= 9;i++)
	{
		for(int j = 1; j <= 8; j++)
			cout << a[i][j] << ' ';
		cout << a[i][9] << endl;
	}

	cin.get();
	cin.get();
	return 0;
}
void fanzhi()
{
	int b[10][10] = {0};
	for(int i = 1; i < 10; i++)
		for(int j = 1; j < 10; j++)
		{
			b[i][j] += 2 * a[i][j];
			b[i+1][j] += a[i][j];
			b[i-1][j] += a[i][j];
			b[i][j+1] += a[i][j];
			b[i][j-1] += a[i][j];
			b[i+1][j+1] += a[i][j];
			b[i-1][j-1] += a[i][j];
			b[i+1][j-1] += a[i][j];
			b[i-1][j+1] += a[i][j];
		}
	for(int i = 1; i < 10; i++)
		for(int j = 1; j < 10; j++)
			a[i][j] = b[i][j];
	return;
}
