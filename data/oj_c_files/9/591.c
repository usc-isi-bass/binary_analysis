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
      int n,i,j,k,m,l;
      int age[10000];
      char ID[10000][10],order[10000][10];
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      scanf("%s %d",ID[i],&age[i]);
      }
      for(i=0;i<n;i++)
      {
                      m=0;
                      for(j=1;j<n-i;j++)
                      {
                                        if(age[j]>=60&&age[j]>age[m])
                                        m=j;
                      }
                      for(j=0;j<10;j++)
                      {
                                       order[i][j]=ID[m][j];
                      }
                      for(j=m;j<n;j++)
                      {
                                        for(k=0;k<10;k++)
                                        {
                                                         ID[j][k]=ID[j+1][k];
                                        }
                                        age[j]=age[j+1];
                      }
      }
      for(i=0;i<n;i++)
      {
                      puts(order[i]);
      }
}