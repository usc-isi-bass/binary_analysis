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
 * X2.cpp
 *
 *  Created on: 2012-11-16
 *      Author: 12100
 *      ??:?????
 */
int main(){
	int n,k,m,i;
	cin>>n>>k;
	int a[n];//???????????
	a[0]=n+k;//???
	do{
		for(i=1;i<n;i++)
		{
		a[i]=((a[i-1]-k)/n)*(n-1);
		if(((a[i]%n)!=k)||(a[i]==k)) break;
		}
		a[0]+=n;
		m=a[0];
	}while(i<n);//????????????????
    m-=n;
	cout<<m;
}
