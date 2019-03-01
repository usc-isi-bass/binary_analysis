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

	int a[1001], b[1001], d[1000] = {0}, n, max = 0; //a,b????????d???????????n?????max?????????
	char c; //????

	for(n = 1; n <= 1000; n++)
	{
		cin >> a[n];
		if(cin.get() == '\n') //??????????
			break;
	}

	//????????????
	cin >> b[1];
	for(int j = 2; j <= n; j++)
		cin >> c >> b[j];

	//????????????
	for(int j = 0; j < 1000; j++)
	{
		for(int k = 1; k <= n; k++)
			if(a[k] <= j && b[k] > j)
				d[j]++;
		max = max > d[j]? max: d[j]; //???????
	}
	
	cout << n << " " << max << endl;
	return 0;
}