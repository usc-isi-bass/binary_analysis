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
      int n,i,j,w,x,y,v;
      scanf("%d",&n);
      v=n*n;
      int a[100000],b[100000]; 
      for (i=0;i<100000;i++)
      {
          scanf("%d %d",&a[i],&b[i]);
          if(a[i]==0 && b[i]==0)
          {
                     w=i+1;
                     break;
          }
      }
      for (j=0;j<n;j++)
      {
          x=0;
          y=0;
          for(i=0;i<w;i++)
          {
                    if(a[i]==j)
                    x++;
                    if(b[i]==j)
                    y++;
          }
          if(j==0)
          {
                  if(x==1 && y==n)
                  {
                               printf("%d",j);
                               break;
                  }
                  
          }
          else
          {
              if(x==0 && y==n-1)
             {
                  printf("%d",j);
                  break;
             }    
          }
      }
      if(j==n)
      printf("NOT FOUND");
      getchar();
      getchar();
}
