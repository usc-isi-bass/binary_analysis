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
//*????????             **
//*????? 1300012848        **
//*???2013.10.30             **
//********************************
int main()
{
	int n, i = 0, j = 0, k, m = 0, p = 0, l, cnt = 0;
	cin >> n;
	int b[100000];
	for (; i < n; i++)
		cin >> b[i];
	cin >> k;
	for (; j < n; j++)
		if(b[j] == k)
			cnt++; //?k??????cnt? ??n?????cnt???
	for (l = 0; l < n - cnt; l++) //???????n-cnt?? 
		for (m = p; m < n; m++) //????????k??????????
			if (b[m] != k)
			{
				b[l]=b[m];
				p = m + 1;
				break; //???b[l]??????????
			}
	for (l = 0; l < n - cnt; l++)
	{
		cout << b[l];
		if(l < n - cnt - 1)
			cout << " ";
	}
	return 0;
}