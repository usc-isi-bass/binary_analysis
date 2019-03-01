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
    int i,j,m;
    int a,b;
    
    scanf("%d",&n);
    if(n==1||n==2||n==3||n==4)
    printf("empty");
    else
    { for(i=3;i<=(n-2);i++)
        {
        for(j=2;j<i;j++)
           {
           if(i%j==0)
           break;
           }
        if(j==i)
           { a=i;
           b=i+2;
           for(m=2;m<b;m++)
            {
            if(b%m==0)
            break;
            }
        if(m==b)
        printf("%d %d\n",a,b);} 
       
        
        }
    } 
       return 0;

}        
      