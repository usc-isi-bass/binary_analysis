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
      int n,i;
      scanf("%d",&n);
      int d1[n];
      int d2[n];
      int a,b;
      a=1;
      b=1;
      for(i=0;i<=n-1;i++)
      {
                       d1[i]=0;
                       d2[i]=0;
      }
      while((a!=0)||(b!=0))
      {
                    
                     a=0;
                     b=0;
                     scanf("%d %d",&a,&b);
                     if((a==0)&&(b==0))
                     break;
                     d2[b]=d2[b]+1;
                     d1[a]=d1[a]+1;
      }
      int m=0;
      for(i=0;i<=n-1;i++)
      {
                       
                       if((d1[i]==0)&&(d2[i]==n-1))
                       {
                                                 printf("%d",i);
                                                 m=1;
                       }
      }
      if(m==0)
      printf("NOT FOUND");
      
}
      
