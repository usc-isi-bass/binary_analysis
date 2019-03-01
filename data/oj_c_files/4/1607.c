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
      int n,lie,z;
      int i,j; 
      scanf("%d %d",&n,&lie);
      int *p[n];
      for(i=0;i<n;i++)
      {
         p[i]=(int *)malloc(lie*sizeof(int));
         for(j=0;j<lie;j++)
         {
                        scanf("%d",p[i]+j);
         }
      } 
      for(z=0;z<=n+lie-2;z++)
      {
                             for(i=0;i<n;i++)
                             {
                                             for(j=0;j<lie;j++)
                                             {
                                                               if(i+j==z)
                                                               printf("%d\n",*(p[i]+j));
                                             }
                             }
      }
      }
