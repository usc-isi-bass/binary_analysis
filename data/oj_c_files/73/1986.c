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
	int a[6][6], i, j, m, n, max;
	for (i = 1;i <= 5; i++)
		for(j = 1; j <= 5;j++)
			cin >> a[i][j];
	for (i = 1;i <= 5;i++)
	{
			max = 0;
			for (j = 1; j <=5;j++)
				if (a[i][j] > max)  
				{
					max = a[i][j];
					m = i;
					n = j;
				}
			for (j = 1;j <= 5; j++)
					if(a[j][n] < max)  break;
			if (j == 6)   
				{
					cout << m << " " << n << " " << a[m][n] << endl;
					break;
				}
	}
		if ( i == 6) cout << "not found" << endl;
		return 0;
}