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

//********************************
//*????5.cpp   **
//*?????? 1300012966 **
//*???2013.10.30  **
//*????????   **
//********************************
int main()
{
	int i, j, k, x[1001], y[1001], m[1001] = {0}, n;
	char s;
	i = 1;
	cin >> x[1];
	s = cin.get();
	while (s == ',')
	{
		i++;
		cin >> x[i];
		s = cin.get();
	}
	i = 1;
	cin >> y[1];
	s = cin.get();
	while (s == ',')
	{
		i++;
		cin >> y[i];
		s = cin.get();
	}
	for (j = 1; j <= 1000; j++)
	{
		for (k = 1; k <= i; k++)
		{
			if (j >= x[k] && j < y[k])
			{
				m[j]++;
			}
		}
	}
	n = 0;
	for (j = 1; j <= 1000; j++)
	{
		if( n < m[j])
		{
			n = m[j];
		}
	}
		cout << i << " " << n;
	return 0;
}






	
