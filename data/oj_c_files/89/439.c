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
	int n, m;
	int p, q = 0, r = 0;
	int i = 0, j;
	int a, b, c[10000] = {0}, d[10000] = {0};
	cin >> n;
	while(1)
	{
		cin >> a >> b;
		if(a == 0 && b == 0)
			break;
		c[b]++;
		d[a]++;
		i++;
	}
	for(i = 0; i < n; i++)
	{
		if(c[i] == n - 1)
		{
			if(d[i] == 0)
			{
				cout << i << endl;
				break;
			}
			else
				cout << "NOT FOUND" << endl;
		}
		else
			q++;
	}
	if(q == n)
		cout << "NOT FOUND" << endl;
	return 0;
}