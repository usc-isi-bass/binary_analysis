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
	int i;
	int a[25];
	a[0] = 1;
	a[1] = 1;
	for(i = 2;i < 25;i++)
	{
		a[i] = a[i-1]+a[i-2];
	}
	int n;
	int s;
	cin >>s;
	for(i = 0;i<s;i++)
	{
		cin >> n;
	cout << a[n - 1]<<endl;
	}
	return 0;
}