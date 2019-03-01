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
	int a[301], n, m, k, t, count;
	
	cin >> n >> m;
	
	while((n != 0) && (m != 0))
	{
		for (k = 1; k <= n; k++)
			a[k] = 1; 
	
		k = 0; t = 0; count = 0; 
	
		while(count < n)
		{  	
			k++;
			if(k == n + 1)
				k = 1;
			if ( a[k] != 0 )
			{ 
				t++;
				if ( t == m )
				{ 
					a[k] = 0; t = 0;
					count++;
				}
			}
		}

		cout << k <<endl;
		
		cin >> n >> m;
	}

	return 0;
} 
