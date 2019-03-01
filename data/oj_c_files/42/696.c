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
    scanf("%d",&n);
    int* p;
    
    p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&p[i]);    
            
            }
    
    int del;
    scanf("%d",&del);
    int c=0;
    for(int i=0;i<=n-1;i++)
    {
            if(p[i]!=del) {c++;
                         if(c==1)   printf("%d",p[i]);
                         else printf(" %d",p[i]);
                         }
            
            
     }
    
    
    
    
    
    
    
    
    
    
    
}
