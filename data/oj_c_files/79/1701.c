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

int ysf(int m,int n)
{
    int *p;
    int i,j,k;
    p=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
         p[i]=0;
    }
    k=n;
    j=1;
    for(i=0;i<n;i=(i+1)%n)
    {
         if(p[i])
         {
              continue;
         }
         if(j++==m)
         
         {
                   p[i]=1;
                   k--;
                   j=1;
         }
         if(k==1)
         {
              break;
         }
   }
   i=0;
   for(;i<n;i++)
   {
                if(p[i]==0)
                break;
   }
   free(p);
   return i+1;
    
}
int main()
{
    int n, m;
    scanf("%d%d",&n,&m);
    while(m!=0||n!=0)
    {
                     

         printf("%d\n",ysf(m,n));   
         scanf("%d%d",&n,&m);
    }
                  
}
    
    
    
    



    
    
    
