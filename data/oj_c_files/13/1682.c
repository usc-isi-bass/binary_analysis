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
     int a[20000],i,n,k,t;
     cin>>n;
     for(i=0;i<=n-1;i++)cin>>a[i];
     cout<<a[0];
     for(i=1;i<=n-1;i++)
     {
          t=0;
          for(k=0;k<=i-1;k++)
          {
               if(a[i]==a[k])t=1;
          }
          if(t==0)cout<<" "<<a[i];
     }
     return 0;
}