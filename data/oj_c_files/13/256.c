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

//
//	file	1000012765_2.cpp
//	author	???
//	date	2010.10.29
//	desc
//		????????
//
int main()
{
	int n, a[20001] = {0}, i, j, count = 0;	//	????????? ????????
	cin >> n;	//	????????
	for(i = 0; i < n; i++)
		cin >> a[i];	//	???????
	for(i = 0; i < n - 1; i++)
		for(j = n - 1; j > i; j--)
		{
			if(a[i] == a[j])
				a[j] = a[20000];	//	???????????????0
		}
		for(i = 0; i < n; i++)
		{
			if(a[i] != 0 && count == 0)
			{
				cout << a[i];
				count++;
			}
			else if(a[i] != 0)
				cout << " " << a[i];	//	???????0??????
		}
		return 0;
}