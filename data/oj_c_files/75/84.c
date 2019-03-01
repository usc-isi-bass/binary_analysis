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
	int max = 0, n = 0, x[1000], y[1000], s[1000] = {0}, i = 0, j;
	char c;
	while(cin >> x[n])
	{
		cin.get(c);
		n++;
		if(c != ',')
			break;
	}
	cin >> y[0];
	for(i = 1; i < n; i++)
	{
		cin >> c;
		cin >> y[i];
	}
	for(i = 0; i < n; i++)
	{
		for(j = x[i]; j < y[i]; j++)
			s[j]++;
	}
	for(i = 0; i < 1000; i++)
		if(max < s[i])
			max = s[i];
	cout << n <<" " << max << endl;
	return 0;
}
