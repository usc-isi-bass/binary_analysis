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
      int n,i,j,t,c,l;
      c=1;
      scanf("%d",&n);
      char a[100];
      for(i=0;i<n;i++)
      {
                      scanf("%s",&a);
                      l=strlen(a);
                      for(j=0;j<l;j++)
                      {
                                      for(t=0;t<l;t++)
                                      {
                                         if(a[t]==a[j]&&t!=j)
                                         break;
                                         if(t==l-1)
                                         {
                                         printf("%c\n",a[j]);
                                         c=0;
                                         }
                                         
                                      }
                                         if(c==0)
                                      {   
                                          c=1;
                                          break;
                                          }
                                         if(j==l-1)
                                         printf("no\n");
                      }
      }
      getchar();
      getchar();
}