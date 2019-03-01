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
 * 1.cpp
 *????????
 *  Created on: 2012-11-6
 *      Author: ???
 */
int main()
{
	int N,k,i,j,m;
	cin>>N;
	const int n=N;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];//????????
	cin>>k;
	for(j=0;j<n;j++)
	{
		if(a[j]!=k)

		{
			cout<<a[j];
			m=j+1;
			break;//????????k?????????
		}
	}
	for(m;m<n;m++)
	{
		if(a[m]!=k)
			cout<<" "<<a[m];//?????k???
		}

}
