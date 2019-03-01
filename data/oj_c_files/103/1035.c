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
      char c[1000];
      scanf("%s",c);
      int i,j;
      i=0;
      for(int k=0;c[k]!='\0';k++)
      {
              if(c[k]>='a'&&c[k]<='z')
              c[k]=c[k]-'a'+'A';
              }
      while(c[i]!='\0')
      {
                   for(j=i;;j++)
                   {
                                      if(c[j]!=c[i])
                                      break;
                                      }
      printf("(%c,%d)",c[i],(j-i));
      i=j;
      }
      }
