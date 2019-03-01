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
      int n,i,j,k,x,y,z;
      scanf("%d",&n);
      z=0;
      for(i=3;i<=n-2;i++)
      {
                         x=(int)sqrt(i);
                         y=(int)sqrt(i+2);
                         for(j=2;j<=x;j++)
                         {if(i%j==0)
                         break;
                         }
                         for(k=2;k<=y;k++)
                         {if((i+2)%k==0)
                         break;
                         }
       if((j==(x+1))&&(k==(y+1)))
       {printf("%d %d\n",i,(i+2));
       z=1;
       }
       }
       if(z==0)
       printf("empty\n");
      
       }                                   
