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


int max(int x,int y)
{
    if(x>=y)
    return x;
    else
    return y;
}

main()
{
      int a[5][5],b[5][5],i,j,k=0;
      for(i=0;i<5;i++)
      {
                      for(j=0;j<5;j++)
                      scanf("%d",&a[i][j]);
      }
      for(i=0;i<5;i++)
      {
                      for(j=0;j<5;j++)
                      b[i][j]=0;
      }
      for(i=0;i<5;i++)
      {
                      for(j=0;j<5;j++)
                      {
                                      if(a[i][j]>=a[i][0]&&a[i][j]>=a[i][1]&&a[i][j]>=a[i][2]&&a[i][j]>=a[i][3]&&a[i][j]>=a[i][4])
                                      b[i][j]++;
                      }
      }
      for(i=0;i<5;i++)
      {
                      for(j=0;j<5;j++)
                      {
                                      if(a[i][j]<=a[0][j]&&a[i][j]<=a[1][j]&&a[i][j]<=a[2][j]&&a[i][j]<=a[3][j]&&a[i][j]<=a[4][j])
                                      b[i][j]++;
                      }
      }
      for(i=0;i<5;i++)
      {
                      for(j=0;j<5;j++)
                      {
                                      if(b[i][j]==2)
                                      {
                                                    printf("%d %d %d\n",i+1,j+1,a[i][j]);
                                                    k=1;
                                      }
                      }
      }
      if(k==0)
      printf("not found\n");
}