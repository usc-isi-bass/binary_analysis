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


int f(int i,int t);        //?????-1?????????????t?????i????

int n,k;

int main()
{
 cin>>n>>k;

 int m=0;

 for(int i=n+k;(m=f(i,n))==-1;i+=n){}

 cout<<m;

 return 0;
}

int f(int i,int t)
{
 return (t==1?i:(i%(n-1)?-1:(f((i*n/(n-1)+k),t-1))));
}