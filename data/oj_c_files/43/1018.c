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

int main()
{
     int i,j,m,flag,n,k,sum;
     scanf("%d\n",&m);
     for(i=3;i<=m;i++)
     {
                      flag=0;
                      for(j=2;j<=i/2;j++)
                      {
                                         if(i%j==0)
                                         {
                                                   flag=1;
                                                   break;
                                         }
                      }
                      if(flag==0)
                      {
                                 n=m-i;
                                 sum=0;
                                 for(k=3;k<=n/2;k++)
                                 {
                                                    if(n%k==0)
                                                    {
                                                              sum=1;
                                                              break;
                                                    }
                                 }
                                 if(sum==0&&i<=n)
                                 printf("%d %d\n",i,n);
                      }
     }
     return 0;
}
  