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
 * shanchuyuansu.cpp
 *
 *  Created on: 2013-10-30
 *      Author:???1300012996
 */
int main(){
	int n,m;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>m;
		a[i]=m;}
	int k,j=1;
	cin>>k;
	for(int ii=0;ii<n;ii++){
		if(a[ii]!=k&&j==1)
			{cout<<a[ii];j+=1;}
		else if (a[ii]!=k&&j!=1)cout<<' '<<a[ii];
	}
	return 0;
}
