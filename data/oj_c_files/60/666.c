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
      int n,i,m,b,c,d;
      scanf("%d",&n);
      if(n==1||n==2||n==3||n==4)
   printf("empty");
      else
      for(i=2;i<=n-2;i++)
                   { m=(int)sqrt(i);c=(int)sqrt(i+2);
                     for(b=2;b<=m;b++)
                     {if(i%b==0)
                      break;}
                     for(d=2;d<=c;d++)
                     {if((i+2)%d==0)
                      break;}
                     if(b==m+1&&d==c+1)
                      printf("%d %d\n",i,i+2);
                     }
   
                 getchar();getchar();getchar();getchar(); getchar();getchar();getchar();getchar();
}
