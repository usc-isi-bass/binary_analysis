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

int ss(int a);

main()
{
      int m;
      scanf("%d",&m);
      int a,b;
      int i,j;
      for(a=3;a<=m/2;a++)
      {
          i=ss(a);
          if(i==0)
          {
              b=m-a;
              j=ss(b);
              if(j==0)
              printf("%d %d\n",a,b);    
          }                  
      }
      return 0;
}

int ss(int a)
{
      int i=2,k=0;
      for(i=2;i<=(a/2);i++)
          if((a%i)==0)
              k++;
      return k;    
}
