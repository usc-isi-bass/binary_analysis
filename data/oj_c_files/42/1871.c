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
//*????????????.cpp
//*??;1300012725
//*?????2013.10
//*?????????????
//******************************************************************************



int main()
{
	int a [100000];
	int n, m, count=0;         //count????????

	cin >> n;                 //??n
	for( int i=0; i<n; i++ )
	{
		cin >> a[i];         //?????
	}
	cin >> m;
	for( int j = 0; j < n-count;  )
	{
		if( a[j] == m )
		{
			count += 1;      //??????????????????
			for( int k = j; k < n-count; k++ )
			{
				a[k] = a[k+1];     //????
			}
		}
		else j += 1;
	}
	for( int t = 0; t < n-count-1; t++ )
	{
		cout << a[t] << ' ';        //???????
	}
	cout << a[n-1-count] << endl;   //??????

	return 0;
}