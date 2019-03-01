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
 * shuzunixu.cpp
 *
 *  Created on: 2012-11-2
 *      Author: ??
 */
int main(){                //?????
	int n,i,j,k,p;         //????
	cin>>n;              //??n
	int a[n];            //????
	for(i=0;i<n;i++)   //????
	{cin>>a[i];}
	for(j=0;j<=n/2-1;j++)   //???????????
	{p=a[j];              //?????????????????
	a[j]=a[n-1-j];
	a[n-1-j]=p;}
    for(k=0;k<n;k++)       //????
    {if(k==0){cout<<a[k];}
     else{cout<<' '<<a[k];}
    }
    return 0;            //???????????
}
