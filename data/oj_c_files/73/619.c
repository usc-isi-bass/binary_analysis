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
//*???:4.cpp               *
//*??:??                  *
//*????:2013?11?10?     *
//*????:????           *
//****************************
int main()
{
	//??????,5*5??a[][],????i,j,p,????????max,?????maxc,
	//???????????record
	int a[5][5], i, j, max, maxc, p, record;
	for ( i = 0; i < 5; i ++ )  //?????????????
		for ( j = 0; j < 5; j ++ )
			cin >> a[i][j];
	for ( i = 0; i < 5; i ++ )  //????????????????
	{
		max = 0; record = 0;
		for ( j = 0; j < 5; j ++ )  //???????????????
		{
			if ( a[i][j] > max )  //???????????????
			{
				max = a[i][j];
				maxc = j;  //????????????
			}
		}
		for ( p = 0; p < 5; p ++ )  //??????????max??????????
		{
			if ( p == i )  //??max????
				continue;
			if ( a[p][maxc] < a[i][maxc] )  //??maxc????????????????
			{
				record = 1;  //?????
				break;  //????
			}
		}
		if ( record == 0 )  //??record?????????????????
		{
			cout << i + 1 << " " << maxc + 1 << " " << max;
			break;
		}
	}
	if ( record == 1 )  //???????????record???1?????????????
		cout << "not found";
	return 0;
}