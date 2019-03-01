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
      char a[260],b[260],c[260];
      scanf("%s",a);
      scanf("%s",b);
      scanf("%s",c);
      for(int i=0;a[i]!='\0';i++)
      {
              int k=0;
              if(a[i]==b[0])
              {
                          k=1;
                          for(int e=0;b[e]!='\0';e++)
                          {
                                  if(a[i+e]!=b[e])
                                  k=0;
                          }
                          if(k==1)
                          for(int f=0;b[f]!='\0';f++)
                          {
                                  a[i+f]=c[f];
                          }
              }
              if(k==1)
              break;
      }
      puts(a);

}