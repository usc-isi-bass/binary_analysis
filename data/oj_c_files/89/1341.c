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
      int n,i,I,j=1,k=0;
      scanf("%d",&n);
      int a[n],b,c,t[n];
      for(i=0;i<n;i++)
      {
              a[i]=i;
              t[i]=0;
      }
      while(j==1)
      {
                 scanf("%d %d",&b,&c);
                 if(b==0&&c==0)
                 break;
                 else
                 for(i=0;i<n;i++)
                 {
                                 if(c==a[i])
                                 t[i]++;              
                 }
      }
      for(i=0;i<n;i++)
      {
        if(t[i]==n-1)
        {
          I=i;
          k++;
        }
      }
      if(k==0)
      printf("NOT FOUND");
      else
      printf("%d",I);
            } 
