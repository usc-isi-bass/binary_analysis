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
 char p[1000];
 scanf("%s",p);
 int i = 0;
 char c,t;
 int n;
 while(1)
 {
         if(p[i] == '\0')
         {
              printf("(%c,%d)\n",c,n);
              break;
         }
         if(i==0)
         {
              if(p[i]>='A' && p[i]<'Z')
                 c=p[i];
              else
                 c=p[i] - 'a'+'A';
              n = 1;
         }
         else
         {
              if(p[i]>='A' && p[i]<'Z')
                 t=p[i];
              else
                 t=p[i] - 'a'+'A';
              if(t==c)
                 n++;
              else
              {
                  printf("(%c,%d)",c,n);
                  c=t;
                  n=1;
              }
         }
    i++;
    } 
}
