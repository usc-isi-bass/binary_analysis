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
* @file homework.cpp
* @author ???    1000062705
* @date 2010-11-8
* @description
* ??????:  ????.cpp: ??????
*/
int main()
{
    int a[5][5], i, j, k, max;
	int t1, t2, s = 0;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			cin >> a[i][j];                   //??5�5???
	for (i = 0; i < 5; i++)
	{
		max = a[i][0];                        //??????????????
		for (j = 0; j < 5; j++)
			if (max <= a[i][j])
			{
				max = a[i][j];                   //????????
			    t1 = i, t2 = j;              //???????????
			}
		for (k = 0; k < 5; k++)
			if (max <= a[k][t2])   continue;     //???????????????????
			else break;
		if(k == 5)  
			{
				cout << t1 + 1 << " " << t2 + 1 << " " << max <<endl;
				s++;                             //???????,???????1
		    }
	}
	if (s == 0)
		cout << "not found" << endl;
    return 0;
}