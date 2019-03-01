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
	int a[16] = {0},n = 0,i,m,j;
	while(cin >> a[0])  
	{
		if(a[0] != (-1))
		{
        	for(i = 1;i <= 15;i++)
			{
	         	cin >> a[i];
				if(a[i] == 0)
					break;
			}
	        for(j = i-1;j >= 0;j--)
			{
				for(m = i-1;m >= 0;m--)
				{
					if(a[j] == 2 * a[m])
						n++;
				}
			}
			cout << n << endl;
			n = 0;
		}
		else
			break;
	}
	return 0;
}
