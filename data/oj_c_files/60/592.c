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
      int n,c=0,e,d,i,b,g=0;
      scanf("%d",&n);
      int a[n],p[n];
      for(i=2;i<=n;i++)
      {
                       p[i-2]=0;
                       for(b=2;b<=sqrt(i);b++)
                       {
                                       if(i%b==0)
                                       p[i-2]++;
                                       }
                                       if(p[i-2]==0)
                                       {
                                                   a[c]=i;
                                                   c++;}
                                                   }
                                                   for(d=0;d<n;d++)
                                                   {
                                                                   e=a[d+1]-a[d];
                                                                   if(e==2)
                                                                   {
                                                                           printf("%d %d\n",a[d],a[d+1]);
                                                                   g++;
                                                                   }
                                                                   }
                                                                   if(g==0)
                                                                   printf("empty");
                                                                   getchar();
                                                                   getchar();
                                                                   getchar();
                                                                   getchar();
                                                                   getchar();
                                                                   getchar();
                                                                   getchar();
                                                                   getchar();
                                                                   getchar();
                                                                   getchar();
                                                                   getchar();
                                                                   getchar();
                                                                   getchar();
                                                                   getchar();
                                                                   }
