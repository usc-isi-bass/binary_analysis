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
//*???????????       **
//*?????? 1300012965      **
//*???2013.10.30             **
//********************************
int main ()
{
	int n, k , i, j, m, x, count;
	count = 0;
	int a[100000] = {0};//????
	cin >> n;
	for(i = 0; i <= n-1; i++)
		cin >> a[i];
	cin >> k;
	for(j = 0;j <= n-1; j++)
	{
		if(a[j] == k)//?????????????
			count++;
		else
			a[j-count] = a[j];//????????????
	}
	x = 0;
	cout << a[x];
	for(x = 1; x <= n - count - 1;x++)//????n-1?????????
		cout << " " << a[x];
	cout << endl ;
	return 0;
}