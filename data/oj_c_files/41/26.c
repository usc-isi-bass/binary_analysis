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
	int a[5],b[5];
	int i, j, k;
	for (a[0] = 1; a[0] <= 5; a[0]++)
	{
		for (a[1] = 1; a[1] <= 5; a[1]++)
		{
			for (a[2] = 1; a[2] <= 5; a[2]++)
			{
				for (a[3] = 1; a[3] <= 5; a[3]++)
				{
					for (a[4] = 1; a[4] <= 5; a[4]++)
					{
						if (a[0] == a[1] ||a[0] == a[2] ||a[0] == a[3] ||a[0] == a[4] ||a[2] == a[1] ||a[3] == a[1]
						||a[4] == a[1] ||a[2] == a[3] ||a[2] == a[4] || a[3] == a[4] || a[4] == 2 || a[4] == 3)
						{
							continue;
						}
						b[0] = (a[4] == 1);
						b[1] = (a[1] == 2);
						b[2] = (a[0] == 5);
						b[3] = (a[2] != 1);
						b[4] = (a[3] == 1);
						for (i = 0; i < 5;i ++)
						{
							if (a[i] == 1)
							{
								j = i;
							}
							if (a[i] == 2)
							{
								k = i;
							}
						}
						if ( b[j] == 1 && b[k] == 1 && ((b[0] + b[1] + b[2] + b[3] + b[4]) == 2))
						{
							cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4];
						}
					}
				}
			}
		}
	}
	return 0;
}