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


int main(int argc, char *argv[])
{
  int n,i,j,t,sum=0,flag=0;
  
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      t=i;   
     for(j=1;j<=2;j++)
        {
         if(i%10==7)
           {
             flag=1;       
             break;
            } 
          else
           i=i/10;
       }
       i=t;    
      if(i%7!=0 && flag!=1)
        {
          sum=sum+i*i;
        }  
      flag=0;  
    }      
  printf("%d",sum);

  return 0;
}
