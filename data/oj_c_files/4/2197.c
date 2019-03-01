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
	int r,c,a[100][100] = {0},i,j,m,n = 1;
	cin >> r >> c;
	for(i = 1;i <= r;i++)
	{
		for(j = 1;j <= c;j++)
		{
			cin >> a[i][j];
		}
	}
	for(i = 1;i < c;i++)
	{
		m = i;
		n = 1;
		while((m >= 1)&&(n <= r))
		{
			cout << a[n][m] << endl;
			m--;
			n++;
		}
	}
	for(i = 1;i <= r;i++)
	{
		m = c;
		n = i;
		while((m >= 1)&&(n <= r))
		{
			cout << a[n][m] << endl;
			m--;
			n++;
		}
	}
	return 0;
}
		
