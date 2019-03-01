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
 * 8.cpp
 *??????
 *  Created on: 2012-10-15
 *      Author: ???
*/
int main()
{
	int n,a;//????
	cin>>n;//??
	for(int i=1;i<=n;i++)//??for??
	{
		cin>>a;
		int x1=1,x2=1,t;
		for(int k=2;k<a;k++)//??for??
		{
			t=x2;
			x2=x2+x1;
			x1=t;//?????????????????
		}
		cout<<x2<<endl;//??
	}
}
