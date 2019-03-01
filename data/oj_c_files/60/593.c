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
      int su(int n);
      int m;
      scanf("%d",&m);
      int a,b;
      a=3,b=5;
      if(m<5)
      {printf("empty\n");}
      else 
      {
           do
           {
           if(su(a)&&su(b))
      {
           printf("%d %d\n",a,b);
      }
      a+=2;
      b+=2;
      }
          while(b<=m);
      }
}
      int su(int n)
      {
          int i;
          int p=1;
          for(i=2;i<n/2;i++)
          {
                            if(n%i==0)
                            {p=0;
                            break;}                    
          }
          return(p);
      } 