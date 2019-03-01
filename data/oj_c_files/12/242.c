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
*@file 2.cpp
*@author ???
*@date 2010-11-03
*@describe
?????????????????????????
*/
int main()
{
	int a[16], i, j, n, count;
	while(1)
	{
		count = 0;
		i = 0;
		//?????0???
		while(1)
		{
			cin >> a[i++];
			if(a[i-1] == 0  || a[0] == -1)
				break;
		}
		n = i - 1;
		//??????-1?????
		if (a[0] == -1)
			break;
		//?????????????????count++
		for (i = 0 ; i < n - 1 ; i++)
			for ( j = i + 1 ; j < n; j ++)
			{
				if (a[i] * 2 == a[j] || a[j] * 2 == a[i])
					count ++;
			}
		//??????????
		cout << count << endl;
	}
	return 0;
}
