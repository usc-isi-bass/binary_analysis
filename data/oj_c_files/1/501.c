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
 * fenjie.cpp
 *
 *  Created on: 2010-11-28
 *      Author: ???
 *      function: ????
 */
int solutionNumber(int a,int k){//??????????????
	int i;
	if(a==1) return 1;
	if(k>a) return 0;
	for(i=k;i<=a;i++)
	    if(a%i==0) return solutionNumber(a,i+1)+solutionNumber(a/i,i);
}
int main()
{
	int n,a[101];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];//??????
		cout<<solutionNumber(a[i],2)<<endl;//????????????
	}
	return 0;
}


