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
//*???????????
//*??? ?? 1300012814  **
//*???2013.10,30  **
//********************************
int main()
{
	int  n, num = 0,a[100000], b;
	cin >> n;
   
	for (int i = 0; i < n; i++)
	{
	cin >> a[i];
	}
	cin >> b;
	int i = 0;
	while ( i < n - num )
	{
	if (a[i] == b)
	{
	for(int j = i; j <= n - 2 - num; j++)
	{
	a[j] = a[j+1];
	}
		num++;
	}
	else i++;
	}
	cout << a[0];
	for (int i = 1; i <= n - 1 - num; i++)
		cout << " " << a[i];

	return 0;
}
