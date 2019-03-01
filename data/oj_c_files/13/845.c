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
 *  Created on: 2011-10-19
 *      Author: Administrator
 */
int main()
{
	int i,j,n;
	cin>>n;
	int a[n];
	cin>>a[0];
	cout<<a[0];
	for(i=1;i<n;i++)
	{
		cin>>a[i];
	    for(j=0;j<i;j++)
	    {
	    	if(a[i]==a[j])
	    		break;
	    	if(a[i]!=a[j]&&j==(i-1))
	    		cout<<" "<<a[i];
	    }
	}
	return 0;
}