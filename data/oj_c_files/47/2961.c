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
     int a[100],b[100],i,n,k,t;
     cin>>n;
     for(i=0;i<=n-1;i++)cin>>a[i];
     cin>>k;
     cout<<a[n-1];
     for(i=1;i<=n-1;i++){b[i]=a[n-i-1];cout<<" "<<b[i];}
     return 0;
}