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
    int b,t,c,n,i;
    int m=0;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d %d",&b,&c);
      if(b>=90&&b<=140&&c>=60&&c<=90)
      {
            m++;     
            a[i]=m;
      }      
      else{
           m=0;      
           a[i]=0;
           }
    }
        a[n]=a[n-1];
    for(i=0;i<n;i++)
    {
       if(n==1)
          t=a[0];
       else if(a[i+1]>a[i])
          t=a[i+1];
       else{
          t=a[i+1];
          a[i+1]=a[i];
          a[i]=t;
          t=a[i+1];
          }
    }                                  
    printf("%d",t);
    return 0;
}                    