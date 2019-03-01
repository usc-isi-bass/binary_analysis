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
   int n;
   double a[2000],b[2000];
   int i,j;
   cin>>n;
   for(i=1;i<=n;i++)
   cin>>a[i]>>b[i];
   double max=0;
   for(i=1;i<=n-1;i++)
     for(j=i+1;j<=n;j++)
       if(sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]))>max)
         max=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
  cout<<fixed<<setprecision(4)<<max<<endl;
return 0;
}
   