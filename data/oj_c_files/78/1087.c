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
	int a[5] ;
	char b[5] ;
	b[1] = 'z'; b[2] = 'q' ; b[3] = 's' ; b[4] = 'l' ;
	for ( a[1] = 1 ; a[1] <= 5 ; a[1] ++)
	{
		for ( a[2] = 1 ; a[2] <= 5 ; a[2] ++)
		{
			for ( a[3] = 1 ; a[3] <= 5 ; a[3] ++)
			{
				for ( a[4] = 1 ; a[4] <= 5 ; a[4] ++)
				{
					if((a[1] + a[2]) == (a[3] + a[4]) && (a[1] + a[4]) > (a[3] + a[2]) && (a[1] + a[3]) < a[2] && a[1] != a[2] && a[1] != a[3] && a[1] != a[4] && a[2] != a[3] && a[2] != a[4] && a[3] != a[4])
					{
						for( int i = 5 ; i > 0 ; i --)
						{
							for( int j = 1 ; j <= 4 ; j ++)
							{
								if(a[j] == i)
									cout << b[j] << " " << a[j] * 10 << endl;
							}
						}
					}
				}
			}
		}
	}
	return 0 ;
}