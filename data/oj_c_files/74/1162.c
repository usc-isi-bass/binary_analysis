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

int su(int n)
{
    int j;
    for(j=2;j<n;j++)
      if(n%j==0)
       break;
     if(j==n)
      return(1);
      else
      return(0); 
}
int main()
{
    int n,m,a,b[100],i,j,k,q=0;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
      if((su(i))==1)
        {
           a=i;    
          for(j=0;;j++)
             {b[j]=a%10;
            a=a/10;
              if(a==0)
               break;
              }
           for(k=0;k<j;k++)
             if(b[k]!=b[j-k])
                 break;
             if(k==j)
             {if(q!=0)
                 printf(","); 
                q++;    
              printf("%d",i);
              }}
       if(q==0)
         printf("no");       
       getchar();
       getchar();
}                                
