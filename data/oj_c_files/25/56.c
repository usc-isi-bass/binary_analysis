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

//Name: ??2?N??.#
//Author:   ??     #
//Number:1000062710  #
//Date:2010?12?15?#
//####################
int main()
{
	int N,i;
	cin >> N;
	int a[400] = {0};
	a[399] = 1;
	for(i = 0; i < N; i++)
	{
		for(int j = 0; j < 400; j++)
		{
			a[j] = a[j] * 2;
		}
		for(int k = 399; k >= 0; k--)
		{
			if(a[k] >= 10)
			{
				a[k] = a[k] - 10;
				a[k - 1]++;
			}
		}
	}
	for(i = 0; i < 400; i++)
	{
		if(a[i] != 0)
		  break;
	}
	for(int j = i; j < 400; j++)
	{
		cout << a[j];
	}
	cout << endl;
	return 0;
}