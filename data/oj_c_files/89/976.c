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

/*
*@author: ??? 1100012986
*@date?2011.12.07
*@description???????
*/
int main()
{
	int  i, n, x, y;
	int a[100000] = {0};
	cin >> n;
    while(1) // ???????????????????????
	{
		cin >> x >> y;
		if(x == 0 && y == 0)
		{
			break;
		}
		a[y]++;
	}
	for(i = 0; i < n; i++) // ??????
	{
		if(*(a + i) == n - 1)
		{
			cout << i << endl;
			break;
		}
	}
	if(i == n) // ??????????NOT FOUND
	{
		cout << "NOT FOUND" << endl;
	}
	return 0;
}