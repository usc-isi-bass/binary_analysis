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

// *****************************************************************************
//*?????????.cpp
//*??;1300012725
//*?????2013.11
//*??????????
//******************************************************************************


int main()
{
	int x[2000], y[2000], t[2000]={0}, i=1, max, j, k;     //????t[2000]??????????max???????i?????j,k??????

	cin >> x[1];
	while( cin.get() != '\n' )                         //??????
	{
		i++;
		cin >> x[i];
	}
	cin >> y[1];
	i = 1;
	while( cin.get() != '\n' )                        //??????
	{
		i++;
		cin >> y[i];
	}
	for( j = 1; j <= i; j++ )
	{
		for( k = x[j]; k < y[j]; k++ )
		{
			t[k]++;                             //??????????????????????1
		}
	}
	max = t[0];
	for( int q = 1; q < 1000; q++ )
	{
		if( t[q] > max )
			max = t[q];                        // ?max???????
	}
	cout << i << ' ' << max << endl;          // ?????????

	return 0;
}
