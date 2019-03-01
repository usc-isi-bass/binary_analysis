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
    int i,m,n,p,k;
    int a[300];
    while (1>0)
    {
          scanf("%d %d",&n,&m);
          if(n==0)
          break;
          else
          {
              for(i=0;i<n;i++)
              a[i]=i+1;
              p=0;
              while(n!=1)
              {
                         k=(m+p-1)%n;
                         for(i=k;i<n;i++)
                         {
                                         a[i]=a[i+1];
                                         }
                                         n--;
                                         p=k;
                                         }
                                         printf("%d\n",a[0]);
                                         }
                                         }
                                        
                                        return 0;}
