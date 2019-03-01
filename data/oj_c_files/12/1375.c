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

//********************************
//*?????    **
//*?????? 1300012757 **
//*???2013.10.30 **
//********************************
int main()
{
	int in;
	cin >> in;
	while (in != -1)
	{
	int a[15];
	int i = 0, num, count = 0;
	while (in != 0)
	{
		a[i] = in;
		i ++ ;
		cin >> in;
	}
	num = i;
	for (int p = 0; p < num ; p ++ )
	{
		if (a[p] % 2 ==1 )
			continue;
		for (int q = 0; q < num  ; q ++ )
		{
			if ( a[p] == a[q] * 2)
				count ++ ;
		}
	}
		cout << count << endl;
		cin >> in;
	}
	return 0;
}