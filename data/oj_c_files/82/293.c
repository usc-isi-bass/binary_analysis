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

int main()
{
	int t = 0, i, n, shou, shu, health;
	int max = 0;
	int bp[100 + 10] = {0};
	cin >> n;
	for (i = 0; i < n; i ++)
	{
		cin >> shou >> shu;
		if (90 <= shou && shou <= 140 && 60 <= shu && shu <= 90)
			bp[i] = 1;
	}
	cout << endl;
	for (i = 0; i < n; i ++)
	{
		if (bp[i] == 0)
		{max = max > t ? max : t; t = 0;}
		else t ++;
	}
	
	max = max > t ? max : t;
	cout << max << endl;
} 