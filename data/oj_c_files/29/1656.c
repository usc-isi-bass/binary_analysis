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
    int m,n,i;
    scanf("%d", &m);
    int counter;
    counter=1;
  
    float sum,a,b,c,d; 
    for(;counter<=m;counter++)
    {  
    a=1;
    b=2;
    sum=2;
   
    
    scanf("%d", &n);
    i=1;
    while(i<n)
    {
    a=a+b;
    c=(float)a/b;
    sum=sum+c;
    i=i+1;
    if(i==n)
    
    break;
    else
    {
    b=a+b;
    d=(float)b/a;
    sum=sum+d;
    i=i+1;
    }
  
    }
   
    printf("%.3f\n", sum);
     }
    
    return 0;
}