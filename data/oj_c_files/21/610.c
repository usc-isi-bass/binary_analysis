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
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */
int main()
{
	int n, i, max, min;
	double sum, k;
	int a[305];
	cin>>n;
	cin>>a[0];
	max=min=a[0];
	sum=a[0];
	for(i=1; i<n; i++)
	{
		cin>>a[i];
		sum=sum+a[i];
		if(a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];
	}
	k=(double)sum/n;
    if((max-k)>(k-min)) cout<<max;
    else if((max-k)<(k-min)) cout<<min;
    else cout<<min<<","<<max;
	return 0;
}
