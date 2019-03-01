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
 * ???5.cpp
 * Created on: 2012-12-11
 * Author: ???
 * ??:??????????
 */
int main(){
	int n,m,i,j,k=0;       //????
	cin>>n>>m;      //??n m
	int a[n][m];    //????
	int (*p)[m];    //????
	p=a;        //?P???
    for(i=0;i<n;i++)  //??????
    {
    	for(j=0;j<m;j++)
    	{
          cin>>*(*(p+i)+j);
    	}
    }
    while(k<=m+n-2)    //????
    {
       for(i=0;i<n;i++)     //??????
       {
    	 for(j=0;j<m;j++)
    	 {
            if(k==i+j)  //?????????
            	cout<<*(*(p+i)+j)<<endl; //??
    	 }
       }
       k++;  //?????1
    }
return 0;      //????
}
