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
 * ????25.cpp
 *???????????????
 *  Created on: 2010-10-29
 *      Author: ???
 */
int main()//???
{//????
	int k,j,i,n,m;//????
	k=0;//??
	cin>>n;//??????????
	int a[100000];//????
	for(i=0;i<n;i++)//??????????
		cin>>a[i];
	cin>>m;//???????
	for(j=0;j<n;j++)//???????????
		if(a[j]!=m){
			a[k]=a[j];
			       k++;
		}
	cout<<a[0];//??????
	        for(j=1;j<k;j++)//???????????
	        cout<<" "<<a[j];
	        return 0;
}//????

