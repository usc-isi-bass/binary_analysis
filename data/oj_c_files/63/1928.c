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

int a[100][100];
int b[100][100];
int x, y, v;
int main()
{
	int x1, y1, x2, y2;
	cin >> x1 >> y1;
	for (x = 0; x < x1; x++)
	{
		for (y = 0; y < y1; y++)
		{
			cin >> a[x][y];
		}
	}
	cin >> x2 >> y2;
	for (x = 0; x < x2; x++)
	{
		for (y = 0; y < y2; y++)
		{
			cin >> b[x][y];
		}
	}
	for (x = 0; x < x1; x++)
	{
		for (y = 0; y < y2; y++)
		{
			for (int i = 0; i < x2; i++) 
			{
				v += a[x][i] * b[i][y];
			}
			cout << v;
			if (y == y2 - 1)
			{
				cout << endl;
			}
			else
			{
				cout << ' ';
			}
			v = 0;
		}
	}
	return 0;
}