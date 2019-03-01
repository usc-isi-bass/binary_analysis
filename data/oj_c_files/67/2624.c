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
	int n, total, valid;
	float x, y;
	cin >> n;
	cin >> total >> valid;
	x = (float)valid / total;
	for (int i = 1; i <= n-1; i++)
	{
		cin >> total >> valid;
		y = (float)valid / total;
		if (y - x > 0.05)
		{
			cout << "better" << endl;
		}
		else 
		{ 
			if (y - x < -0.05)
			{
				cout << "worse" << endl;
			}
			else cout << "same" << endl;
		}
	}
	return 0;
}
				 
