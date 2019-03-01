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
      char c[1200],m;
      scanf("%s",c);
      int i,j,a = 0,b,l;
      l = strlen(c);
      if(c[0]>='a' && c[0]<='z')
          m = c[0] -'a'+'A';
      else
         m = c[0];
      a=1;
    
      for(i=1;i<l;i++)
      {
          if(c[i] == c[i-1] || c[i] == c[i-1]+32  || c[i] == c[i-1] -32)
              a++;
          else
           {
             printf("(%c,%d)",m,a);
             a = 0;
             if(c[i]>='a' && c[i]<='z')
             m = c[i] -'a'+'A';
             else m = c[i];
             a++;
           }
      }
      printf("(%c,%d)",m,a);
      getchar();
      getchar();
      getchar();
      getchar();
}
