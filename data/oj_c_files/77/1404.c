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

int x = 0;
int a[50];
char str[100];
char b, g;
int l;
int main()
{
	cin.getline(str, 100, '\n');
	l = strlen(str);
	b = str[0];
	g = str[l - 1];
	game(0, 0, 1);
	return 0;
}
void game(int k, int i, int j)
{
	if (j == l - 1)
	{
		cout << "0 " << l - 1;
	}
	else
	{
		if (str[j] == g)
		{
			cout << i << " " << j << endl;
			x = x - 1;
			game(a[x], i - k, j + 1);
		}
		else
		{
			a[x] = k;
			x = x + 1;
			game(j - i, j, j + 1);
		}
	}
}