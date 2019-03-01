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
     ????????
     ??????
     ???2010-12-29
*/
int main()
{
	char c[1000];
	int num = 0, i, j, max = 1, flag[1000] = {0};           //flag[]?????????
	int x[1000], y[1000];               //?????????
	for(i = 0; c[i - 1] != '\n'; i++)
	{
		cin >> x[i];
		c[i] = cin.get();          //???????????
	}
	num = i;
    for(i = 0; c[i - 1] != '\n'; i++)
	{
		cin >> y[i];
        c[i] = cin.get();
	}
	for(i = 0; i < num; i++)
	{
		for(j = x[i]; j < y[i]; j++)
		{
			flag[j]++;
		}
	}
	for(i = 0; i < 1000; i++)
	{
		if(flag[i] > max) max = flag[i];
	}
	cout << num << " " << max << endl;
	return 0;
}