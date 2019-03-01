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
    int a,r,b;
    scanf("%d",&a);
    if(a==1)
    printf("End");
    else       
       { if (a%2==0)
       {r=a/2;
       b=r;
    printf("%d/2=%d\n",a,r);}
    else
    {r=(a*3)+1;
    b=r;
    printf("%d*3+1=%d\n",a,r);  }
while(b!=1)
    {  if (b%2==0)
              {r=b/2;
       
    printf("%d/2=%d\n",b,r);
    b=r;}
    else
    {r=b*3+1;
   
    printf("%d*3+1=%d\n",b,r);  
     b=r;}
    
    }printf("End");}
    getchar();
    getchar();    }