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
	int	n;
	cin >> n;
	double	a[n + 1], c[n + 1];
	int	i;
	double	b[n + 1];
	memset(a, 0, sizeof(a));
	memset(c, 0, sizeof(c));
	memset(b, 0, sizeof(b));
	for (i = 1; i <= n; i ++)
	{
		cin >> a[i];
		cin >> c[i];
		b[i] = (double)(c[i] / a[i]); 
	}
	for (i = 2; i <= n; i ++)
	{
		if (b[i] - b[1] < (-0.05))
		{
			cout << "worse" << endl;
		}
			else if (b[i] - b[1] > (0.05))
			{
				cout << "better" << endl;
			}
				else
				{
					cout << "same" << endl;
				}
	}	
return 0;
}