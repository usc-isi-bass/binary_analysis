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
    int i,j,k,m,n,p,q;
    scanf("%d",&n);
    m=0;
    for(i=2;i<=n-2;i++)
    {
        p=0;
        
        for(j=2;j<i/2;j++)
        {
            if(i%j==0)
            p++ ;  
        }
        q=0;
        for(k=2;k<=(i/2)+1;k++)
        {
            if((i+2)%k==0)
            q++;
        }
        if(p<1&&q<1)
        {
            printf("%d %d\n",i,i+2);
            m++;
        }    
    }
    if(m==0)
    printf("empty\n") ;
   
}