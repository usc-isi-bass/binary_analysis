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
//*@file:2.cpp                   *
//*@author:??? 1200012894     *
//*@date:2012.11.1               *
//*@function:????????    *   
//********************************

int main()
{
	long int n, number, drop;    // n?????????,number?????,drop???????
	cin >> n;
	long int a[100001];  // ????
	for (int i = 0; i < n; i++)  // ????????
	{
		cin >> number;
		a[i] = number;
	}
	cin >> drop;
	for (int j = 0; j < n; j++)  // ???????????????
	{
		if (a[j] == drop)   // ??????????????????????
		{
			for (int k = j; k < n; k++)
			{
				a[k] = a[k + 1];
			}
			n = n - 1;   // ????????????j?1
			j = j - 1;   // ?j????j + 1??????????j + 1???????
		}
	}
	for (int s = 0; s < n; s++)
	{
		if (s != n - 1)
		{
			cout << a[s] << " ";
		} // end if 
		else  
		{
			cout << a[s];
		} // end else
	} // end for
	return 0;
}