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
	int r[4], A, B, C, i, j;
	char a[4] = {'A','B','C','\0'};
	for(r[1] = 1; r[1] <= 3; r[1]++)
		for(r[2] = 1; r[2] <= 3; r[2]++)
			for(r[3] = 1; r[3] <= 3; r[3]++)
			{
				if(r[1] + r[2] + r[3] != 6 || r[1] * r[2] * r[3] != 6) continue;
				A = (r[2] > r[1]) + (r[3] == r[1]);
				B = (r[1] > r[2]) + (r[1] > r[3]);
				C = (r[3] > r[2]) + (r[2] > r[1]);
				if(r[1] + A == 3 && r[2] + B == 3 && r[3] + C == 3)
				{
					for(i = 1; i <= 3; i++)
					{
						for(j = 1; j <= 3; j++)
						{
							if(r[j] == i)
							{
								cout << a[j - 1];
								break;
							}
						}
					}
				}
			}
	return 0;
}