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
 * opkp.cpp
 *
 *  Created on: 2012-10-24
 *      Author: 1234
 */
int main()
{
	int n;
	int a,b,c;
	int m[50];
	a=b=c=1;
	cin>>n;
	for(int j=0;j<n;j++)
	{
		cin>>m[j];
		a=b=1;
		for(int i=0;i<m[j]-2;i++)
			{
				c=b;
				b=a+b;
				a=c;
			}
		cout<<b<<endl;
	}
}



