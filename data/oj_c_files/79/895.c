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
  int m=1,n,i,j,k,r=0,T;
  while(m!=0)
   {
     scanf("%d %d",&m,&n);if(m==0)break;
     int monkey[309];
     for(i=0;i<m;i++)
       monkey[i]=1;
     T=0;
     for(i=1;i<m;i++)
       {
         for(j=1;j<=n;)
           {
             if(monkey[T]==1)
               {j=j+1;}
             T=(T+1)%m;
           }
         monkey[(T-1+m)%m]=0;//printf(" %d",T-1);
       }
     for(i=0;i<m;i++)
        {
          if(monkey[i])
            {
             printf("%d\n",i+1);
             //break;
             }

        }
}}
