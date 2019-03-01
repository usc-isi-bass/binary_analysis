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

int work(int n);
int main()
{
    unsigned int num,n;
    unsigned int a,b;
    scanf("%ud",&num);
    for(n=6;n<=num;n+=2)
       {
         printf("%ld=",n);
         for(a=2;a<n;a++)
            {
              if(work(a))
              {
                b=n-a;
                if(work(b))
                  {
                    printf("%ld+%ld",a,b);
                    break;
                    }  
                } 
              }
            printf("\n");
         }
         
    return 1;
}

int work(int n)
{
    int i,sqr;
    sqr=(int)sqrt(n);  
    //if(n==2) return 1;               
    for(i=2;i<=sqr+1;i++)
       {
        if(n%i==0)return 0;
        }
    return 1;
}                   
    
    
