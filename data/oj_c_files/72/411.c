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

int main ()
{
	int m = 0, n = 0;                   //????????
	int a[21][21] = {0};                //????
	int i = 0, j = 0;
	cin >> m >> n;
	for(i = 0; i < m ; i ++)
		for(j = 0 ; j < n ; j ++)
			cin >> a[i][j];               //????
	for(i = 0; i < m; i ++)
		for(j = 0 ; j < n; j ++)
		{
			int flag = 1;                 //???????????????
			if((i - 1 >= 0) && (a[i - 1][j] > a[i][j]))
				flag = 0;
			if((j - 1 >= 0) && (a[i][j - 1] > a[i][j]))
				flag = 0;
			if((i + 1 < m) && (a[i + 1][j] > a[i][j]))
				flag = 0;
			if((j + 1 < n) && (a[i][j + 1] > a[i][j]))
				flag = 0;
			if(flag == 1)
				cout << i << ' ' << j << endl;//???????
		}
	return 0;
}