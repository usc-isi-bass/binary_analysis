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
 * wanyi.cpp
 *
 *  Created on: 2012-11-12
 *      Author: 7
 */
int apple(int n,int k,int a)
{
	if(a%(n-1)==0)
	return a=a/(n-1)*n+k;
	else return -1;
}

int main()
{
	int n,k,a,i;
	cin>>n>>k;
	for(i=1;;i++)
	{
		a=i;
		for(int j=0;j<n;j++)
		{a=apple(n,k,a);
		if(a==-1)
			break;
		}
		if(a==-1)
			continue;
		else
			break;
	}
	cout<<a;
}
