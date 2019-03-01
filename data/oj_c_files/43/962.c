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
	int a, b;
	double m;
	cin >> m;
	a = 0.5 * (m);
	for(b = 3;b <= a; b++)
	{ 
		for(int d = b - 1;d >= 2; d--)
		{
			if (b % d == 0) break;
			if (d == 2)
				{
			     int e;e = m - b;
				 for(int f = e - 1;f >= 2; f--)
				 {
					 if(e % f == 0) break;
					 
					 if (f == 2)
					 { 
						 cout << b << " " ;
						 cout << e << endl;
					 }
				 }
				}
		}
	}
	return 0;
}

 
 
 
