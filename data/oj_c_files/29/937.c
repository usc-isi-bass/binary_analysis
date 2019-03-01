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
      int a[100],m,i,k;
      float n,a1,a2,a3;
      scanf("%d",&m);
      i=0;
      while(i<m)
      {
                scanf("%d",&a[i]);
                i=i+1;
      }
      i=0;
      while(i<m)
      {
                a1=1;
                a2=2;
                n=0;
                k=1;
                while(k<=a[i])
                {
                    n=a2/a1+n;
                    a3=a2;
                    a2=a1+a2;
                    a1=a3;
                    k=k+1;
                    }
                    printf("%.3f\n",n);
                    i=i+1;
                    }
                    getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
                    }       