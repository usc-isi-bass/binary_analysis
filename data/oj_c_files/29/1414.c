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

double fs(int n)
{
       int f=0;
       if(n==1)
       f=1;
       else
       {
       if(n==2)
       f=2;
       else
       f=fs(n-1)+fs(n-2);
       }
       return f;
       }
main()
{
      int m;
      scanf("%d",&m);
      for(int j=0;j<m;j++)
      {
              int n;
              scanf("%d",&n);
      double a[n];
      double sum=0;
      int i;
      for(i=0;i<n;i++)
      {
                        a[i]=(fs(i+2))/(fs(i+1));
                        sum+=a[i];
                        }
                        printf("%.3lf\n",sum);
                        }
                        }
