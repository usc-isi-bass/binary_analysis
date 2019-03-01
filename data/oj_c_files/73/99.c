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
      int a[5][5];
      int i,j,l;
      for(i=0;i<5;i++)
      for(j=0;j<5;j++)
      scanf("%d",&a[i][j]);
      int count=0,max=0,min=0,temp;
      for(i=0;i<5;i++)
      {
              max=0;
              min=0;
              for(j=0;j<5;j++)
              {
                      if(a[i][j]>max)
                      {
                                     max=a[i][j];
                                     temp=j;
                      }
              }
              for(l=0;l<5;l++)
              {
                      if(a[i][temp]>a[l][temp]) break;
              }
              if(l==5) 
              {
                       printf("%d %d %d\n",i+1,temp+1,a[i][temp]);
                       count++;
              }
      }
      if(count==0) printf("not found\n");
}
