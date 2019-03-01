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
 *  Created on: 2011-11-4
 *      Author: 11288
 */
int main(){
	int n,i,j,k;
	cin>>n;
	int a[n],b[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		b[i]=a[i];
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]==b[j])
				b[j]=0;
	cout<<b[0];
	for(i=1;i<n;i++)
		if(b[i]!=0)
			cout<<' '<<b[i];
	return 0;

}
