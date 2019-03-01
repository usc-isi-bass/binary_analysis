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
	int a[100000],i,j,k,h,g,n,sign;	
	for(i = 1; ; i++)
	{
		cin >> a[i];
		if(a[i] == -1)
			break;
	}
	for(j = 1; j <= i - 1; j++)
	{
		if(a[j] == 0)
		{	
			for(k = j - 1; k >= 1; k--)
			{	
				if(a[k] == 0)
				{	
					break;
				}
			}
			sign = 0;
			for(h = k + 1; h < j; h++)
			{	
				for(g = k + 1; g < j; g++)
				{	
					if(a[h] == 2 * a[g])
						sign++;
				}
			}
			cout << sign << endl;
		}
	}
	return 0;
}