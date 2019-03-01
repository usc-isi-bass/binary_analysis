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
	int x[1001], y[1001];
	char comma;
	int i, j;
	for(i = 1;;i++)
	{
		cin >> x[i];
		comma = cin.get();
		if(comma == ',')
			continue;
		if(comma == '\n')
			break;
	}
	for(i = 1;;i++)
	{
		cin >> y[i];
		comma = cin.get();
		if(comma == ',')
			continue;
		if(comma == '\n')
			break;
	}
	int num = i;
	int time[1001] = {0};
	for(i = 1; i <= num; i++)
		for(j = x[i]; j < y[i]; j++)
			time[j]++;
	int max = time[1];
	for(i = 1; i <= 1000; i++)
		if(max < time[i])
			max = time[i];
	cout << num << " " << max << endl;
	return 0;
}

