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
	int i = 0, n, m = 0, x[1000], y[1000], j, s[1000] = {0};
	char c;
    for(;;i++)
	{
		cin >> x[i] ;
		cin.get (c);
		if(c != ',') break;
	}
	n = i + 1;
	for(j = 0 ; j < n ; j ++)
	{
		cin >> y[j];
		cin.get (c);
	}
	for(i = 0 ; i < n ; i ++)
	{
		for(j = x[i]; j < y[i] ; j ++)
		{
			s[j] ++;
		}
	}
	for(i = 0 ; i < 1000 ; i ++)
	{
		if(s[i] > m)
		{
			m = s[i];
		}
	}
	cout << n << " " << m;
	return 0;
}