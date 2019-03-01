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
    int y,m,d,n=0;
    scanf("%d %d %d",&y,&m,&d);
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(y%4==0&&y%100!=0||y%400==0)
   {
      a[1]=29;
      if(m==1)  
      n=n+d;
     else
    { 
     for(int i=1;i<m;i++)
     n=n+a[i-1];
     n=n+d;
    }
   }
   else
   {
     if(m==1)  
      n=n+d;
    else
    { for(int i=1;i<m;i++)
     n=n+a[i-1];
     n=n+d;
    }
       
    }
    printf("%d",n);
    getchar();
    getchar();
}
