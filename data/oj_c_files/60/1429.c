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

main()
{
      int i,j,n;
      scanf("%d",&n); 
      i=1;
      j=0; 
      while(i<=n)
      {
                 if(isprime(i)==1&&isprime(i+2)==1&&i+2<=n)
                 {printf("%d %d\n",i,i+2);
                 j++;} 
                 i=i+2;
                 } 
      if(j==0)
      printf("empty"); 
        
        } 
int isprime(int a)
{
    int j=2;
    while(j<a&&a%j!=0)
    {
               j++;
               }
               if (j==a)
               return 1;
               else 
               return 0;
               } 
     
