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
 int a[4],b[4];
 for(int i=1;i<=3;i++)
 {
  a[1]=i;
  for(int s=1;s<=3;s++)
  {
   if(s==i)
    continue;
   a[2]=s;
   for(int t=1;t<=3;t++)
   {
    if(s==t || t==i)
    continue;
    a[3]=t;
    b[1]=(a[2]>a[1])+(a[1]==a[3]);
    b[2]=(a[1]>a[2])+(a[1]>a[3]);
    b[3]=(a[3]>a[2])+(a[2]>a[1]);
    if((a[1]-a[2])*(b[1]-b[2])<0 && (a[1]-a[3])*(b[1]-b[3])<0 && (a[2]-a[3])*(b[2]-b[3])<0)
    {
     int f;
     char c[3]={'A','B','C'},k;
     for(int h=1;h<3;h++)
     {
      for(int g=h;g<3;g++)
      {
       if(a[g]<a[g+1])
       {
        f=a[g];
        a[g]=a[g+1];
        a[g+1]=f;
        k=c[g-1];
        c[g-1]=c[g];
        c[g]=k;
       }
      }
     }
      for(int d=2;d>=0;d--)
      {
       cout<<c[d];
      }
    }
   }
  }
 }
 return 0;
}

   

