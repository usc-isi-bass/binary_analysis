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
// ????1000012789_3.cpp                                      *
// ???wusy                                                    *
// ???11,3                                                    *
// ???????                                                *
//****************************************************************
int main()
{
	int a[5][5],  maxr[5], e[5], f[5], max, g, count = 0;//??????????
	for(int i = 0; i < 5; i++)
		for(int j = 0; j < 5; j++)
			cin >> a[i][j];

	for(int k = 0; k < 5; k++)
	{
		max = a[k][0];									//?????	
		f[k] = 0;								      		
		for(int t = 0; t < 5; t++)
		{
			if(a[k][t] > max)
			{
				max = a[k][t];							//	???????????????
				f[k] = t;
			}
		}
		maxr[k] = max;									//	??????????????
		e[k] = k;										//	?????
	}

	for(int p = 0; p < 5; p++)
	{
		g = 0;											//	???????g
		for(int q = 0; q < 5; q++)
		{
			if(maxr[p] > a[q][f[p]])
			{
				g = 1;
				break;									//	????????????????????????g?1
			}
		}
		if(g == 0)										//	?g????????????
		{
			cout << e[p] + 1 << " " << f[p] + 1 << " " << maxr[p] << endl;
			count++;
		}
	}

	if(count == 0)
		cout << "not found" << endl;
	return 0;
}

