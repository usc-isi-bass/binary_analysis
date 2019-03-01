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
    char ch;
    int f[10000]={0};
    int x,count,i;
    
  
    scanf("%d%c",&x,&ch);
    while(ch==',')
    {
        f[x]=1;          
        scanf("%d%c",&x,&ch);
              
    }
    f[x]=1; 
    count=0;

    for(i=9999;i>=0;i--)
    {                        
       if(f[i]>0)
       {
         count++;
       
       }
       if(count==2)
       {
         printf("%d",i);
         return 0;          
       }
    }
    printf("No");
     return 0;    
}

