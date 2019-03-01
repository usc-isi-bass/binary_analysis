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
//* file homework                *
//* author ??                  *
//* data 10/10/29                *
//* ??  ???????         *
//********************************

int main()
{
	int n, i, j, l, w, k;//?????
	int a[200000] = {0};//?????
	cin >> n;//????????
	for (i = 1 ; i <= n; i ++)//?????????
	{cin >> a[i];}
	cin >> k;//????????
	for(j = 1,l = 1; j <= n ;j ++)//???????????
	{
		if(a[j] != k)
			a[l++] = a[j];
	}
	for(w = 1; w < l;w ++)//???????
	{
		if(w == 1)
			cout << a[1];
		else
			cout << " "<<a[w];
	}
	
	return 0;
}

