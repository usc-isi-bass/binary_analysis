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
	int a[5][5], i, j, I, J, t = 0 ;
	for (i = 0 ; i <= 4 ; i ++)
		for (j = 0 ; j <= 4 ; j ++)
			cin >> a[i][j] ;
	for (i = 0 ; i <= 4 ; i ++)
	{
		if (t != 0)
			break ;
		for (j = 0 ; j <= 4 ; j ++)
			if (a[i][j] > t)
				t = a[i][j], I = i, J = j ;
		for (int k = 0 ; k <= 4 ; k ++)
			if (a[k][J] < t)
				t = 0 ;
	}
	if (t == 0)
		cout << "not found" ;
	else
		cout << I + 1 << " " << J + 1 << " " << t ;
	
	return 0 ;
}