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
      int n,i,a,b;
      int*p;
      int*q;
      scanf("%d",&n);
      p=(int*)(malloc(n*sizeof(int)));
      q=(int*)(malloc(n*sizeof(int)));
      for(i=0;i<n;i++)
      {
           *p=0;
           *q=0;
           p+=1;q+=1;
      }
      p=p-n;q=q-n;
      for(;;)
      {
             scanf("%d %d",&a,&b);
             if((a==0)&&(b==0))
             break;
             p[a]+=1;q[b]+=1;
      }
      for(i=0;i<n;i++)
      {
             if((p[i]==0)&&(q[i]==n-1))
             {
                 printf("%d",i);
                 break;
             }
      }
      if(i==n)
      printf("NOT FOUND");
      
}