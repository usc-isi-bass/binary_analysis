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

/* ????main.cpp
 * ??????
 * ?????2012-10-29
 * ?????????????????????????????????????? 
 * ????????????????????????????? 
 */

int main ()
{
	int n,a[100000],k,i,j;//????n,k???a?????i?j
	j = 0;//???j?0
	cin >> n;
	for ( i = 0; i < n; i++ )
		cin >> a[i];//?????????
	cin >> k;
	for ( i = 0; i < n; i++ )
		if ( a[i] != k )//?a[i]???k????????????a????a?????
		{
			a[j] = a[i];
			j = j + 1;
		}
	cout << a[0];//???????
	if ( j > 1 )
		for ( i = 1; i <= j - 1; i++ )
			cout << " " << a[i];
	cout << endl;
	return 0;
}