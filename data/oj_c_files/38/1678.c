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
{ int k;
  cin>>k;
  for(int i=0;i<k;i++)
     { 
           int n;
           cin>>n;
           double a[100],average=0,sum=0,s;
           double *p;
           p=a;
           for(int i=0;i<n;i++)
                {cin>>*(p+i);
                  average+=*(p+i);}
            average=average/n; 
            for(int j=0;j<n;j++)
                 sum+=(*(p+j)-average)*(*(p+j)-average);
            s=sqrt(sum/n);
            cout<<fixed;
            cout<<setprecision(5)<<s<<endl;
        }
   return 0;
}