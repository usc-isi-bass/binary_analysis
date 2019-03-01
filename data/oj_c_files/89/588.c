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



/**
* @author ??
* @date 2010-12-8
* @description
* ??????:?????? 
*/

int main()
{
	int n, a[10000]= {0}, b[10000] = {0}, x, y, flag = 0;
	cin >> n >> x >> y;
	while(x || y)
	{
		a[x]++;
		b[y]++;
		cin >> x >> y;
	}
	for (int i = 0; i < n; i++)
	{
		if (!a[i] && (b[i] == n - 1))
		{
			cout << i << endl;
			flag = 1;
		}
		if (flag)
			break;
	}
	if (!flag)
		cout << "NOT FOUND" << endl;

	return 0;
}
	