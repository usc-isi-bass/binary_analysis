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
      int i,n,j=0,k=0,p,m,c;
      float h,a[40],b[40],t;
      char s[10];
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
             scanf("%s %f",s,&h);
             if(s[0]=='m')
             {a[j]=h; j++;}
             if(s[0]=='f')
             {b[k]=h; k++;}
      }
      for(p=0;p<j;p++)
      {
            for(m=0;m<j-p-1;m++)
            {
                   if(a[m]>a[m+1])
                   {
                          t=a[m+1];
                          a[m+1]=a[m];
                          a[m]=t;
                   }
            }
      }
      for(c=0;c<j;c++)
      printf("%.2f ",a[c]);
      for(p=0;p<k;p++)
      {
            for(m=0;m<k-p-1;m++)
            {
                   if(b[m]<b[m+1])
                   {
                          t=b[m+1];
                          b[m+1]=b[m];
                          b[m]=t;
                   }
            }
      }
      for(c=0;c<k-1;c++)
      printf("%.2f ",b[c]);
      printf("%.2f\n",b[k-1]);
      getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
}
