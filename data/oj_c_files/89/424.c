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
      int n;
      scanf("%d",&n);
      int a[100000][2];
      int i,j;
      for(i=0;;i++)
      {
                   scanf("%d %d",&a[i][0],&a[i][1]);
                                   
                   if(a[i][0]==0 && a[i][1]==0) break;
                   }
      int k,l;
      k=i,l=0;
      int c[100000];
      for(i=0;i<n;i++)
      {
                      for(j=0;j<k;j++)
                      {
                                      if(i==a[j][0]) break;
                                      }
                                      if(j==k) {c[l]=i;l++;}
                      }
      int m,p;
      m=0,p=0;
      for(i=0;i<l;i++)
      {
                      for(j=0;j<k;j++)
                      {
                                      if(a[j][1]==c[i]) m++;
                                      }
                                      if(m==n-1) {printf("%d\n",c[i]);p++;}
                      }
                      if(p==0) printf("NOT FOUND\n");
      getchar();getchar();getchar();
      
      } 
