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


int main () 
{
	int n, sum = 0, i, j, t1 = 0;
	scanf("%d",&n);
    for (j = 1; j <= n; j++)
	{
			if (j % 7 != 0)
			{
				int t2 = j;
				int m = (int)log10(t2), a[3];
				for (i = 0; i < t2; i++)
					{
						a[i] = t2 % 10;
						if (a[i] == 7)
						{t1 = 1; break;}
						else t1 = 0;
						t2 = t2 / 10;
					}
				if (t1 == 0)
					{	
						sum = sum + j*j;
					}
			}
	}
	printf("%d\n",sum);
	return 0;
}
