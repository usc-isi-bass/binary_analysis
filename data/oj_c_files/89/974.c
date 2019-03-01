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
	int a[100000] = {0};
	int n, x, y, i;
	cin >> n;
	while (1)
	{
		cin >>  x >> y;
		if (y == 0 && x == 0)
			break; 
		(*(a + y))++;
		(*(a + x))--;
	}
	for (i =  0; i < n; i++)
	{
		if (*(a + i) == n - 1)
		{
			cout << i << endl;
			break; 
		} 
	}
	if (i == n)
		cout << "NOT FOUND" << endl;
	return 0;
}