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

//****************************
//????1000012825         *
//??????               *
//???12.10                *
//?????????         *
//****************************
int main ()
{
	int n, i, j, k, p, flag = 0, a[100000][2], count[100000] = {0};
	cin >> n;     //???????
	for ( i = 0; ; i++ )
	{
		for ( j = 0; j < 2; j++ )
			cin >> a[i][j];			
		if ( a[i][0] == 0 && a[i][1] == 0 ) //?? 0.0 ?????
			break;
		else
			count[a[i][1]]++; //?????????
	}
	for ( k = 0; k <= n - 1; k++ )
	{
		if ( count[k] >= n - 1 ) //????????????????????
		{
			for ( p = 0; p < n; p++ )
				if ( a[p][0] == k )
					break;
			if ( p == n  ) //????????
			{	
				cout << k << endl;
				flag = 1;
			}
		}
	}
	if ( flag == 0 )
		cout << "NOT?FOUND" << endl; //????????
	return 0;
}

