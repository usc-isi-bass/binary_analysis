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
//*????????   **
//*?????? 1300012934 **
//*???2013.10.31  **
//********************************


int main()
{  
	int x[1000], y[1000], t[1000] = {0}, n, number, tmax;
	char douhao;

	n = 1;
	cin >> x[0];
	while ((douhao = cin.get()) != '\n')
	{
		cin >> x[n];
		n++;
	}
	cin >> y[0];
	for (int i=1; i <= n - 1; i++)
	{
		cin >> douhao >> y[i];
	}
	for (int i=0; i <= n - 1; i++)
	{
		for (int j=x[i]; j < y[i]; j++)
		{
			t[j]++;
		}
	}
	number = 0;
	tmax = 0;
	for (int i=0; i <= n - 1; i++)
	{
		if (tmax < y[i])
			tmax = y[i];
	}
	for (int i=0; i <= tmax; i++)
	{
		if (number < t[i])
			number = t[i];
	}
	cout << n << " " << number;


	return 0;

}
