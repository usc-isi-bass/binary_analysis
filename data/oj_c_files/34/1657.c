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
 * jiaogucaixiang.cpp
 *
 *  Created on: 2013-11-16
 *      Author: dyx
 */
int oushu(int n)
{
	int a=n/2;
	cout << n <<"/2="<<a<<endl;
	return a;
}
int jishu(int n)
{
	int a=3*n+1;
	cout << n<<"*3+1="<<a<<endl;
	return a;
}
int main()
{
	int n;
	cin>> n;
	while(1)
	{
		if(n==1)
		{
			cout << "End";break;
		}
		if(n%2==0)
			n=oushu(n);
		else
			n=jishu(n);

	}
return 0;
}
