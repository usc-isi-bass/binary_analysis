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
	int w, n = 0; 
	cin >> w; 
	int a[365];
	memset(a, 0, sizeof(a));
	int b[12] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	
	for (int i = 0; i < 51; i++)
	{
		int n = 7 * i + 13 - w;
		a[n] = 1; 
	}
	
	for (int i = 0; i < 12; i++)
	{
		n += b[i];
		a[n+13] += 1; 
		if (a[n+13] == 2)
		cout << i + 1 << endl;
	}
	return 0;
}