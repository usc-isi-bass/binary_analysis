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
 * ????????.cpp
 *
 *  Created on: 2011-10-21
 *      Author: sony
 */
int main()
{
	int n,i,j,q=0,a[20000];
	cin>>n;
	for(i=0;i<n-q;i++)
	{
		cin>>a[i];
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				q++;
				i--;
			}
		}
	}
	for(i=0;i<n-q-1;i++)
		cout<<a[i]<<" ";
	cout<<a[n-q-1];
	return 0;
}