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

//********************************************
//*3�D�?o&#213;D&#198;&#184;&#187;��&#203;�y                          *
//*D&#213;&#195;&#251;?oo&#206;&#212;&#198;&#198;e                              *
//*&#209;�o&#197;?o1300012888                          *
//*�&#213;&#198;�?o2013.11.5                           *
//********************************************

int main()
{
	int a[1001], b[1001], t[1000], n, i, tmax;

	tmax = INT_MIN;
	i = 1;
	while(1)
	{
		cin >> a[i];
		i ++;
		if(cin.get() == '\n')
			break;
	}
	n = i - 1;
	for(i = 1;i <= n;i ++)
	{
		cin >> b[i];
		cin.get();
	}
	for(i = 0;i <= 999;i ++)
		t[i] = 0;
	for(i = 1;i <= n;i ++)
	{
		for(;a[i] <= b[i] - 1;a[i] ++)
			t[a[i]] ++;
	}
	for(i = 0;i <= 999;i ++)
	{
		if(t[i] > tmax)
			tmax = t[i];
	}
	cout << n << " " << tmax << endl;

	return 0;
}