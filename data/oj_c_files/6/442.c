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
	int *p = {NULL}, a[100][100], z, m, n, i = 1, j = 0, s;
	cin >> z;
	while(i <= z)
	{
		s = 0;
		cin >> m >> n;
		p = *a;
		for(j = 0; j < m * n; j++)
		{
			cin >> *p++;
			if(j < n || j >= n * (m - 1) || j % n == 0 || (j + 1) % n == 0)
				s += *(p - 1);
		}
		cout << s << endl;
		i++;
	}
	return 0;
}

