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
   int k,s,g;
   int a[20];
   a[1]=1;
   a[2]=1;
   for(int j=3;j<=20;j=j+1)
   {
    a[j]=a[j-1]+a[j-2];
    }
   cin>>k;
   for(int i=0;i<k;i++)
   {
     cin>> g;
     s=a[g];
     cout<<s<<endl;   
    }
}