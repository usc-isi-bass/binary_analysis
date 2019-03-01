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
   int a,b,i,j,n,c;cin>>n;
    for(j=1;j<=n;j++)
          {
             a=1;b=1;cin>>c;
             for(i=1;i<=c/2;i++)
             {
                 a=a+b;b=a+b;}
        if(c%2==0) cout<<b-a<<endl;
        else   cout<<a<<endl;
          }
return 0;
}