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
 * integratedexercise1.4.cpp
 *
 *  Created on: 2013-12-13
 *      Author: st
 */
int main()
{
	int n;
	cin>>n;

	int a[301];
	int i;

	for(i=0;i<n;i++)
		cin>>a[i];

	double sum=0,ave,distance=0;
	for(i=0;i<n;i++)
		sum+=a[i];
	ave=sum/n;

	int count=0;
	for(i=0;i<n;i++)
	    if(fabs(ave-a[i])>distance)
	    	distance=fabs(ave-a[i]);

	for(i=0;i<n;i++){
		if((distance-fabs(ave-a[i])<1e-10)){
			count++;
	    if(count==1)
	    	cout<<a[i];
	    else cout<<","<<a[i];}
	}

}
