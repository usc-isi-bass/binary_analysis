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

//*************************************************
//* file: 1000012912_007.cpp                      *
//* author : ???                               *
//* date : 2010.11.24                             *
//* function : ?????                         *
//*************************************************
int main()
{
	int i, j, n, time[1000] = {0}, max,in[1000], out[1000];                 //n????in??????out??????time???????
	char c[1000];
	for ( i = 0; c[i - 1] != '\n'; i ++ )
	{
		cin >> in[i];
		c[i] = cin.get();
	}
	n = i;
	for ( i = 0; c[i - 1] != '\n'; i ++ )
	{
		cin >> out[i];
		c[i] = cin.get();
	}
	for ( i = 0; i < n; i ++ )
		for ( j = in[i]; j < out[i] ; j ++ )
			time[j] ++;                                          //???????1
	max = 0;
	for ( i = 1; i < 1000; i ++ )                                //????????
		if ( time[max] < time[i] )
			max = i;
	cout << n << ' ' << time[max] << endl;
	return 0;
}
