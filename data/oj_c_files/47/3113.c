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
 * nb.cpp
 *
 *  Created on: 2013-12-5
 *      Author: de
 */
int main(){
int n,i,t;
cin>>n;
int a[n];
for(i=0;i<n;i++)cin>>a[i];
int *p=NULL,*q=NULL;
p=a;
for(p=a,q=a+n-1;p<q;p++,q--)
{
t=*p;
*p=*q;
*q=t;
}
p=a;
cout<<*p;
for(p=a+1;p<a+n;p++)
cout<<" "<<*p;
return 0;
}
