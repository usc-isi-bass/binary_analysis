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
      int a,b,c,i,j,d,k;
      b=0;
     
      scanf("%d",&a);
      if(a==6)
      printf("3 3");
      else
      {d=a/2;
          for(i=3;i<=d;i++)
          {
                           for(b=0,j=2;j<i;j++)
                           {if(i%j==0) 
                           b=1;}
                           
                           if(b==0)
                           {c=a-i;
                                   for(k=2;k<c;k++)
                           if(c%k==0) 
                           b=1;
                           if(b==0)
                           printf("%d %d\n",i,(a-i));}
                             
                             }
                             }
                             getchar();
                             getchar();
                             }