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
      int k=0,p=0,m=0,n,i,j,a[100000],b[100000],c[100000];
      scanf("%d",&n);
      for(i=0;i<100000;i++)
      {
                        c[i]=0;
      }
      scanf("%d %d",&a[0],&b[0]);
      for(i=1;(a[i-1]!=0)||(b[i-1]!=0);i++)
      {
                      scanf("%d %d",&a[i],&b[i]);
                      k++;
      }
      for(j=0;j<n;j++)
      {
                      for(i=0;i<k;i++)
                      {
                                      if(b[i]==j)
                                      c[j]++;
                      }
      }
      for(j=0;j<n;j++)
      {
                      for(i=0;i<k;i++)
                      {
                                      if(a[i]==j)
                                      break;
                                      else
                                      m++;
                      }
                      if((c[j]==n-1)&&(m==k))
                      {
                                   printf("%d",j);
                                   p++;
                                   break;
                      }
                      m=0;
      }
      if(p==0)
      printf("NOT FOUND");
} 
                                       
