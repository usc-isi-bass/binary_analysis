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
	int m, a, b, i, j, k, l;
	cin >> m;
	for(i = 3; i < m; i = i + 2)
	{
            for(j = 3; j < i; j = j + 2)
			    if((i % j) == 0) break;
		    if(j == i)
			    a = i;
			else
				a = 0;
			b = m - a;
			for(k = 3; k < b; k = k + 2)
				if((b % k) == 0) break;
            if(k == b)
				if(((a <= b)&&(a!=0))==1)
					cout << a << " " << b << endl; 
	}
	return 0;
}

