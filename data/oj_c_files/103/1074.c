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
      char c;
      char x;
      int n=0;
      c=getchar();
      n=1;
      while(1)
      {
              if(c>='a'&&c<='z') c=c-32;
              x=getchar();
              if(x>='a'&&x<='z') x=x-32;
              if(x=='\n')
              {
                         printf("(%c,%d)",c,n);
                         break;
              }
              if(x==c) n++; 
              else
              {
                  printf("(%c,%d)",c,n);
                  c=x;
                  n=1;
              }
      }
}
