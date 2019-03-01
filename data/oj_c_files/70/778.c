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
     int n,i,k;
     double max=0.0,dis;
     cin>>n;
     double a[n][2];
     for (i=0;i<n;i++)
         {cin>>a[i][0]>>a[i][1];
         cout<<endl;}
     for(i=0;i<n;i++)
         for(k=i+1;k<n;k++)
               {dis=sqrt((a[i][0]-a[k][0])*(a[i][0]-a[k][0])+(a[i][1]-a[k][1])*(a[i][1]-a[k][1]));
                max=(max>dis?max:dis);
               }
     printf("%.4f\n", max);
     return 0;    
}
