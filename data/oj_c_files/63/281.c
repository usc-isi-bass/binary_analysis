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
	int x1, y1, x2, y2, i, j, k;
	int a[1000][1000] = {0}, b[1000][1000] = {0}, c[1000][1000] = {0};
	cin >> x1 >> y1;
	for (i=1;i<=x1;i++)
	{
		for (j=1;j<=y1;j++)
			cin >> a[i][j];
	}
	cin >> x2 >> y2;
	for (i=1;i<=x2;i++)
	{
		for (j=1;j<=y2;j++)
			cin >> b[i][j];
	}
	for(k=1;k<=y2;k++)
	{
		for (i=1;i<=x1;i++)
		{
			for (j=1;j<=y1;j++)
			{
				c[i][k] = c[i][k] + a[i][j] * b[j][k];
			}
		}
	}
	for (i=1;i<=x1;i++)
	{
		cout << c[i][1];
		for(k=2;k<=y2;k++)
		{
			cout <<" "<< c[i][k] ;
		}
		cout << endl;
	}
	return 0;
}