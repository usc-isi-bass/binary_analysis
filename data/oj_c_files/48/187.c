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

int a[10][10] = {0};
void bac(int n)
{
	int i,j;
	int b[10][10] = {0};
	if (n == 0)
		return;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (a[i][j] != 0)
			{

				b[i - 1][j] += a[i][j];
				b[i + 1][j] += a[i][j];
				b[i - 1][j - 1]+= a[i][j];
				b[i - 1][j + 1]+= a[i][j];
				b[i+1][j-1]+=a[i][j];
				b[i+1][j+1]+=a[i][j];
				b[i][j-1]+=a[i][j];
				b[i][j+1]+=a[i][j];		
				a[i][j] = a[i][j] * 2;
			}
		}
	}
	for (i = 1; i<= 9; i++)
		for (j = 1; j <= 9; j++)
			a[i][j]+=b[i][j];
	bac(n - 1);
	return;
	
}
int main()
{
	int i,j;
	int m, n;
	cin >> m >> n;
	a[5][5] = m;
	bac(n);
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j<= 8; j++)
			cout << a[i][j] << " ";
		cout << a[i][j] << endl;
	}
	return 0;
}