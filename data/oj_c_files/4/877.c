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

/*
 * try_second.cpp
 *
 *  Created on: 2012-12-9
 *      Author: ada
 */
int main()
{
	int m , n ;
	cin >> m >> n ;
	int a[100][100] ;
	for(int i = 0 ; i < m ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			cin >> a[i][j] ;
		}
	}
	for(int i = 0 ; i < (m+n) ; i++)
	{
		for(int j = 0 ; j < m ; j++)
		{
			for(int k = 0 ; k <n ; k++)
			{
				if(j+k == i)
				{
					cout << a[j][k] <<endl ;
				}
			}
		}
	}
	return 0 ;
}
