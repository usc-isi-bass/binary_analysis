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

//****************************************************************
//* ? ??4.cpp                                                 *
//* ? ??? ? 1200012916                                      *
//* ? ??2012?12?15?                                        *
//* ? ????????                                          *
//****************************************************************

struct people // ?????
{
	int x;
	int y;
}p;

int main()
{
	int i, n, a[10000] = {0}, t = 0;
	cin >> n;
	while(1)
	{
		cin >> p.x >> p.y;
		if (p.x == 0 && p.y == 0)
			break;
		if (p.x != p.y)     // ????????????????
			a[p.x] = 10000; // ??????????????????
		a[p.y] += 1;        // a[p, y]??????????
	}
	for (i = 0; i < 10000; i++)
	{
		if (a[i] == n - 1)  //???n - 1???????????????
		{
			cout << i << endl;
			t = 1;   // ?t?????????????
			break;
		}
	}
	if (t == 0)  
		cout << "NOT FOUND" << endl;

	return 0;
}