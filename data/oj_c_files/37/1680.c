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
      int n,k;
      scanf("%d",&n);
      for(k=0;k<n;k++)
      {
      int p=0,i,j,m=0,q=0;
      char a[100010];
      scanf("%s",a);
      for(i=0;a[i]!=0;i++)
      p++;
      for(i=0;i<p;i++)
      {
                      for(j=0;j<p;j++)
                      {
                            if(a[i]!=a[j])
                            m++;
                            }
                            if(m==p-1)
                            {printf("%c\n",a[i]);
                             break;}
                             else
                             {m=0;
                             q++;}
                               }
                               if(q==p)
                               printf("no\n");}
                            
                             }          
