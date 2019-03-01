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
//*???2?n??
//*??? ?? 1300012814  **
//*???2013.11,14  **
//********************************
int main()
{
	int n, a[100] = {1};

	cin >>n;
	for (int i = 1; i<=n;i++)
	{
	for (int j = 0;j < 100;j++)
    {
	a[j] = 2 * a[j];
	}
	for (int j = 0; j<100;j++)
	{
	if (a[j] >= 10)
	{
	a[j+1]++;
	a[j] = a[j]%10;
	}
	}
	}
	int j = 99;
	while (a[j]==0)
	{
		j--;
	}
	for (;j>=0;j--)
	{
	cout << a[j];
	}

	return 0;
}