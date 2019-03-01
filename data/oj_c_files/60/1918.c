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
      int m,i,j,s,k,h;
      int n;
      int a,b,l;
      a=0;
      b=0;
      l=0;
      scanf("%d",&n);
      for(m=2;m<n-1;m++)
      {
                      k=sqrt(m);
                      for(i=2;i<=k;i++)
                      {
                          if(m%i==0)
                          {
                                a=1;
                                break;
                          }
                      }
                          if(a==0)
                          {
                                s=m+2;
                                h=sqrt(s);
                                for(j=2;j<=h;j++)
                                {
                                if(s%j==0)
                                {
                                    b=1;
                                    break;
                                }
                                }
                                if(b==0)
                                {
                                    printf("%d %d\n",m,s);
                                    l=1;
                                }
                           }
                      a=0;
                      b=0;
       }
      if(l==0)
      printf("empty");
       
}
