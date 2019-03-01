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
      int i,a;
      scanf("%d",&i);
      while(i!=1)
      {
                 if (i==1) break;
                 else if(i%2) 
                 {a=3*i+1;
                 printf("%d*3+1=%d\n",i,a);
                 i=a;
                 continue;}
                 else
                 {
                 a=i/2;
                 printf("%d/2=%d\n",i,a);
                 i=a;
                 }
      
                 }
                 printf("End");
                 getchar();
                 getchar();
                 getchar();
}