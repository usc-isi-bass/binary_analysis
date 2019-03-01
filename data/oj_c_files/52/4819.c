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

int main()
{
     int n,m,i,j;
     cin>>n>>m;
     int a[n];
     for (i=0;i<n;i++)
          cin>>a[i]; 
     int *p=a,*q=&a[n-m],*t=NULL;
     for (t=q;t<q+m;t++)
         cout<<*t<<' ';
     for (t=p;t<p+n-m-1;t++)
         cout<<*t<<' ';
     cout<<*t<<endl;
     return 0;
}