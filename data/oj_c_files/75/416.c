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

//************************************
//??????????
//???:??
//?????2010.11.24
//?????????????????
//************************************
int main ()
{
	//????a,b??????????????????c??????????????i.n.j,i???????
	int a[10000],b[10000], c[100000] = {0}, i, n, j;
	char d;//?????????','?'\n'
	int max = 0;//???????????0
	for ( i = 0; ; i++)
	{
		cin >> a[i];
		d = cin.get();
		if (d =='\n')
			break;
	}//???????????','????????????????
	for ( j = 0; j <= i; j++)
	{	
		cin >> b[j];
		d = cin.get();
	}//??????????','
	for ( n = 0; n <= i;n++)
		for (j = a[n];j < b[n]; j++)
			c[j]++;//??????????????
	for ( j = 0; j < 1000; j++)
	{
		if (c[j] > max)
			max = c[j];
	}//??????
	cout << i + 1 << " " << max << endl;
	return 0;
}
