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
      int a[5][5],b[5][5];
      int i,j,k,js;
      for(i=0;i<5;i++)
          scanf("%d %d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]);
      for(i=0;i<5;i++)
          for(j=0;j<5;j++)
              b[i][j]=1;
      js=0;
      for(i=0;i<5;i++)
          for(j=0;j<5;j++)
          {
              for(k=0;k<5;k++)
              {
                  if(a[i][j]>a[k][j])
                      b[i][j]=0;
              }
              for(k=0;k<5;k++)
              {
                  if(a[i][j]<a[i][k])
                      b[i][j]=0;
              }
              if(b[i][j]==1)
              {    
                   printf("%d %d %d",i+1,j+1,a[i][j]);
                   js=1;
              }                   
          }
      if(js==0)
         printf("not found");
      getchar();
      getchar();
      getchar();
}
