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
		int a[13] = {0,0,3,3,6,1,4,6,2,5,0,3,5}, w, i, j, date, b[13] = {0};
		cin >> w;
		for (i = 1 ; i <= 12 ; i++)
		    {
				date = w + a[i] + 5;
		        for (j = 1 ; j >= 1 ; j++)
				    {
						if (date > 7)
							date-=7;
						else {
							    if (date == 5)
								{cout << i <<endl; break;}
						        else break;				
						     }
				    }
		    }
		return 0;
    }