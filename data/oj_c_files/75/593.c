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
//*????????      **
//*?????? 1300012757 **
//*???2013.10.30  **
//********************************
int main()
{
	int a[1000], b[1000];
	int start, end, i = 0;
	do
	{
		cin >> start;
		a[i] = start;
		i ++;
	}while (cin.get() == ',');
	i = 0;
	do
	{
		cin >> end;
		b[i] = end;
		i ++;
	}while (cin.get() == ',');
	int t0 = 0,t = 0;
	for (int j =0;j < 1000 ; j++)
	{
		for (int p =0; p < i; p ++)
		{
			if (a[p] <= j && b[p] > j)
				t ++;
		}
		if (t > t0 ) t0 = t;
		t = 0;
	}
	cout << i <<" " << t0;
	return 0;

}
	