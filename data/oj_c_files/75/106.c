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
	int i, j, t, max = 0;
	int in[1000], out[1000], num_t[1000] = {0};
	char a;
	for (i = 0; ; i++)
	{
		cin >> in[i];
		cin.get(a);
		if (a == '\n')
			break;
	}
	for (i = 0; ; i++)
	{
		cin >> out[i];
		cin.get(a);
		if (a == '\n')
			break;
	}
	
	i++;


	cout << i << " ";
	for (j = 0; j < i; j++)
	{
		for(t = in[j];  t < out[j]; t++)
			num_t[t]++;
	}
	for (t = 0; t < 1000; t++)
		if (num_t[t] > max)
			max = num_t[t];
	cout << max << endl;
	return 0;
}