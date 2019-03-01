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
 * 1000012730_26.cpp
 *  ????????
 *  Created on: 2010-10-29
 *      Author: ???
 */

int main(){
	int n,i,m=1;
	cin>>n;                           //????n
	int a[n];
	for(i=1;i<=n;i++)                 //??????a[i]
		cin>>a[i];
	cout<<a[1];
	for(i=2;i<=n;i++)
		{m=1;                         //???????????m
		for(int j=i-1;j>0;j--)
			if(a[i]==a[j])
				m=0;
		if(m==1) cout<<' '<<a[i];}
	return 0;
}
