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
      int m,n,i,j,k;
      scanf("%d",&m);
      for(i=3;i<m/2+1;i++)
      {
                        for(j=2;j<i;j++)
                        {
                                        if(i%j==0)
                                        break;
                        }
                        if(j==i)
                        {
                                n=m-i;
                                for(k=2;k<n;k++)
                                {
                                                if(n%k==0)
                                                break;
                                }
                                if(k==n)
                                printf("%d %d\n",i,n);
                                
                        }
      }
      getchar();
      getchar();
}