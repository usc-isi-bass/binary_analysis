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

//*********************************
//*?????                    **
//*?????? 1200012945       **
//*???2012.10.23              **
//*********************************
	
int main()
{	
	int a[16], x, i, j, k, l, n;
	for (i = 0; ; i++)
	{
		n = 0;
		j = 0;
		while (cin >> x)
		{
			if (x == 0 || x == -1)
				break;
		    a[j] = x;
    		j++;
		}
		if (x == -1)
			break;
		for (k = 0; k < j; k++)
		{
			for (l = 0; l < j; l++)
			{
				if (a[l] == 2 * a[k])
					n = n + 1;
			}
		}
		cout << n << endl;
	}
	return 0;
}
             