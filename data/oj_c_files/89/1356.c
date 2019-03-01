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
      int n,t,count=0,r;
      scanf("%d",&n);
      int b[10000]={0},c[10000]={0};
      for(t=1;;t++)
      {
            int i,j;
            scanf("%d %d",&i,&j);
            if(i==0&&j==0)
                break;
            else
            {
                b[i]++;
                c[j]++;
            }
      }
      for(r=0;r<n;r++)
      {
            if(b[r]==0&&c[r]==n-1)
            {    
                printf("%d\n",r);
                count++;
            }
      }
      if(count==0)
           printf("NOT FOUND");
}     
