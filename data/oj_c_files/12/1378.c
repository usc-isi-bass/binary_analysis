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

//********************************
//*??? ??     **
//*?????? 1300012887 **
//*???2013.10.23 **
//********************************
int main()
{
	int i = 0, x, j, g, k, b, a[15];
	while (cin>>x)
	{
		if (x == -1)
			return 0;
		else
		{
			j = 0;
			i = 0;
		    for(g = 0; ; g++)
			{
		        a[i] = x;
		        i++;
				cin >> x;
				if(x == 0)
					break;
			}
			for (k = 0;k < i;k++)
			{
				b = 2*a[k];
	            for(g = 0; g < i; g++)
				{	
					if(a[g] == b)
						j++;
				}
			}
		}
		cout << j << endl;
	}
}

					
					






	
