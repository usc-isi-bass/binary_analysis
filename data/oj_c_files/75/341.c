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

//???2010?11?24?
//???1000010586_???
//????????

int main()
{
	int start[1000] , end[1000];
	int i , j , k , num = 1 , max = 0 , min = 1000 , flag , M = 0;
	cin >> start[0];
         min = start[0];
	while ( cin.get() == ',' )
	{
		cin >> start[ num ];
		if ( start[ num ] < min )
			min = start[ num ];
		num ++;
	}
	cin >> end[0];
         max = end[0];
	for ( i = 1 ; i <= num - 1 ; i ++ )
	{
		cin.get();
		cin >> end[i];
		if ( end[i] > max )
			max = end[i];
	}
	for ( j = min ; j <= max - 1 ; j ++ )
	{
		flag = 0;
		for ( k = 0 ; k <= num - 1 ; k ++ )
		{
			if ( j >= start[k] && j < end[k] )
				flag ++;
		}
		if ( flag > M )
			M = flag;
	}
	cout << num << " " << M << endl;
	return 0;
}



