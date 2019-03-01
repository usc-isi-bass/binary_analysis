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

// xunzhaoshanding.cpp : Defines the entry point for the console application.
//



int main()
{
	int m = 0;
	int n = 0;
	int high[21][21] = {0};
	int i = 0;
	int t = 0;

	cin >> m;
	cin >> n;

	for( i = 1;i <= m;i++ )
		for( t = 1;t <= n;t++ )
		{
			cin >> high[i][t];
		}

	for( i = 1;i <= m;i++ )
		for( t = 1;t <= n;t++ )
		{
			if( high[i][t] >= high[i - 1][t] && high[i][t] >= high[i + 1][t] && high[i][t] >= high[i][t + 1] && high[i][t] >= high[i][t - 1] )
				cout << i - 1 << " "  << t - 1 << endl;
		}

	cin >> i;

	return 0;
}
