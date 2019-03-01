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

/**
* @file homework.cpp
* @author ???
* @date 2011-10-19
* @description
* ??????: ????????
*/
int main()
{
	int n, i, j, k, num = 0;
	cin>>n;
	int a[100000];
	for (i = 0; i < n; i++)
		cin>>a[i]; // ?n??????
	cin>>k;
	for (i = 0; i < n; i++)
	{
		if (a[i] == k) num = num + 1; // ?a[i]??????num?1
		else a[i - num] = a[i];	// ??a[i]???num?
	}
	for (j = 0; j < n - num; j++)
		if (j != n - num - 1) 
			cout<<a[j]<<" ";
		else cout<<a[j]; // ????????????
	return 0;
}