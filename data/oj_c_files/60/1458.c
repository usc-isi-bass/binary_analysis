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


int f(int i)
{ 
    if(i<3)
    return 0;
    if(i>=3)
    {int j ;
    for(j=2;j<i;j++)
    {
                    if(i%j==0)
                    {return 0;
                    break;}}
     if(j==i)
     return 1;
     }
  } 
         int main()
  {       int n,k; 
    scanf("%d",&n);
    if(n<5)
    printf("empty");
    if(n>=5)
    {for(k=3;k<n-1;k++)
       {if(f(k)==1 &&f(k+2)==1)
       printf("%d %d\n",k,k+2);
       }}
      return 0;
      
  } 
       