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
      for(int i=0;i<100;i++)
      {
                   int n,m,j,p;
                   scanf("%d%d",&n,&p);
                   int a[1000],b[1000];
                   a[0]=0;
                   b[0]=0;
                   m=p;
                   if(n==0&&m==0)return 0;
                   else
                   {
                       for(j=1;j<=n;j++)
                       a[j]=j;
                       int k;
                       for(k=n;k>0;k--)
                       {               
                                       if(p>k)
                                       m=p%k;
                                       for(j=1;j<k;j++)
                                       {
                                                        if(m+j<=k)
                                                        b[j]=a[m+j];
                                                        else
                                                        b[j]=a[m+j-k];
                                       }
                                       for(int m=1;m<=k-1;m++)
                                       a[m]=b[m];
                       }
                       printf("%d\n",a[1]);
                                          }
      }
}
