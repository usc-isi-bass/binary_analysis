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

int sushu(int a)
{   int i,k;  
    if (a==1)
      k=0;
    else if(a==2)
       k=1;
    else     
  {  for(i=2;i<a;i++)
  {  if(a%i!=0) 
     k=1;
     else
   {  k=0;
      break;
    }  
    }
    }
    return (k);  
    }
main()
{   int n,b[100000],i,j,k,t;
    scanf("%d",&n);
    if(n<=4)
    printf("empty");
   else 
   { for(i=1,j=0;i<=n;i++)
   {t=sushu(i);
   if(t==1)    
   {   b[j]=i;
       k=j;   
       j=j+1;    
                    }
                    } 
   for(j=1;j<=k;j++)
   {if(b[j]-b[j-1]==2)  
     printf("%d %d\n",b[j-1],b[j]);
                    }                               
                    }  
                           
   
}
