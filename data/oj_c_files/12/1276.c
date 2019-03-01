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
	int a[16] = {0}, i, j, count;
	cin >> a[0];
	while (a[0] != -1)
	{
		count = 0;
		for (i = 1; ; i++ )
		{
			cin >> a[i];
			if (a[i] == 0)
			{
				break ;
			}
		}
		for (i = 0; a[i] != 0; i++ )
		{
			for (j = 0; a[j] != 0; j++ )
			{
				if (a[i] == 2 * a[j])
				{
					count ++ ;
				}
			}
		}
		cout << count << endl;
		cin >> a[0];
	}

	return 0;
}
