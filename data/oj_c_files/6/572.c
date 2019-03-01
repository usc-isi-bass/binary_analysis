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

// ?????????? ?? 1000062708
int main()
{
	int ac[100][100], i, j, k, *p, n, a, b, s;
	cin >> n;
	for(i = 0;i < n;i++)
	{
		s = 0;
		cin >> a >> b;
		for(j = 0;j < a;j++)
			for(k = 0;k < b;k++)
				cin >> ac[j][k];
		for(j = 0;j < a;j++)
		{
			if(j == 0 || j == a - 1)
				for(p = ac[j];p < ac[j] + b;p++)
					s += *p;
			else
			{
				p = ac[j];
				s = s + *p + *(p + b - 1);
			}
		}
		cout << s << endl;
	}
	return 0;
}



