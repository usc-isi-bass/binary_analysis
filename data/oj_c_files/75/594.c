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
	int x[1001] , y[1001] , t[1001] = {0} ;
	int i , j , k , m = 0 ;
	char a = ',' ;
	for (i = 1 ; a == ',' ; i ++)
	{
		cin >> x[i] ;
		a = cin.get();
	}
	a = ',' ;
	for (i = 1 ; a == ',' ; i ++)
	{
		cin >> y[i] ;
		a = cin.get() ;
	}
	cout << i - 1 << " " ;
	for(j = 1; j < i; j++)
	{
		for(k = x[j]; k < y[j]; k++)
			t[k] = t[k] + 1;
	}
	for(int l = 1; l <= 1000; l++)
	{
		if(t[l] > m)
			m = t[l];
	}
	cout << m << endl;
	return 0;
}