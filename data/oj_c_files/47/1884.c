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
 * ????.cpp
 *
 *  Created on: 2012-12-14
 *      Author: ??
 *      ?????????????????????????8,6,5,4,1?????1,4,5,6,8?
 */
int main()
{
	int a[105],*p=a;//????a???
	int i,n;
	cin>>n;//??????
	for(i=0;i<n;i++)
	{
		cin>>*p++;//????

	}
	for(i=n-1;i>=1;i--)
	{
		cout<<*(a+i)<<' ';
	}
	cout<<*a<<endl;//????
	return 0;
}
