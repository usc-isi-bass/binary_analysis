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
 * pp19.cpp
 *
 *  Created on: 2010-11-17
 *      Author: d
 */
int main()
{
int i=1,j,n=0,sum=0;
int a[20];
while(cin>>a[0]&&a[0]!=-1){
    while(cin>>a[i]&&a[i]!=0)
    {    i++;n++;  }
    for(i=0;i<=n;i++)
    	for(j=i+1;j<=n;j++)
    		if(a[i]==a[j]*2||a[j]==a[i]*2)
    			sum++;

    cout<<sum<<endl;i=1;   sum=0;  n=0;
    }
    return 0;
}
