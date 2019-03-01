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
 * 2.cpp
 *
 *  Created on: 2012-9-14
 *      Author: 12006
 */

int tmp = 2 ;
int suml(int n,int tmp)  //??????
{
	int sum = 0 ;
	if(n==1)
	{
		return 1 ;
	}
	for(int i = tmp ; i <=n ; i++)
	{
		if(n%i==0)
		{
			sum+=suml(n/i,i);


		}
	}
	return sum ;
}
int main()
{
	int m ;
	cin >> m ;
	int n ;
	for(int i = 0 ; i < m ; i++)
	{
		cin >> n ;
		int zon_shu = 0 ;
		zon_shu = suml(n,tmp) ;
		cout << zon_shu <<endl ;
	}
}
