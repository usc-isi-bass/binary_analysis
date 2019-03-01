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
 * 3.cpp
 *????
 *  Created on: 2012-11-5
 *      Author: ???
*/
int main()
{
    int N,i,j;
    cin>>N;
    const int n=N;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<a[n-1];
    for(j=1;j<n;j++)
    	cout<<" "<<a[n-1-j];
}
