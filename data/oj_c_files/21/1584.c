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
 * 1234.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */
int main()
{
	int i,c=0,t=0,n;
	double sum=0;
	double a[301],b[301];
	double s;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		sum+=a[i];
	s=sum/n;
	double max=0;
	for(i=0;i<n;i++)
	{ if(abs(s-a[i])>=max)
		max=abs(s-a[i]);
	}
	for(i=0;i<n;i++)
	{  if(abs(s-a[i])==max) {b[t++]=a[i];
        c++;}
	}
	for(i=0;i<c-1;i++)
		cout<<b[i]<<",";
	cout<<b[c-1]<<endl;

	return 0;
}

