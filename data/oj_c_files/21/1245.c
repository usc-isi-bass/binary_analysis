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
 * test2.cpp
 *
 *  Created on: 2014-1-5
 *      Author: ???
 */
int main()
{
	int n,a[1000];
	float e,d,s=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	e=s/n;
	d=fabs(a[0]-e);
	for(int i=1;i<n;i++)
	{
		if(d<fabs(a[i]-e))
			d=fabs(a[i]-e);
	}
	int t;
	for(t=0;t<n;t++)
		if(fabs(a[t]-e)==d)
		{
			cout<<a[t];
		    break;
		}
	for(int i=t+1;i<n;i++)
		if(fabs(a[i]-e)==d)
			cout<<','<<a[i];
	return 0;
}
