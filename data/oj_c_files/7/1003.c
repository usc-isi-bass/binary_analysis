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
      char str[257],sub[257],rep[257];
      int k,count=0,i,j=0;
      gets(str);
      gets(sub);
      gets(rep);
      k=strlen(sub);
      for(i=0;;)
      {
             
             if(count==k||str[j]=='\0')
                 break;
             else
             {
                 for(;str[j]!=0&&count!=k;j++)
                 {
                      if(str[j]==sub[i])
                      {
                           count++;
                           i++;
                      }
                      else
                      {
                          count=0;
                          i=0;
                      }
                 }
             }
      }
      if(count==k)
      {     
          
          for(int t=0;j-k+t<j;t++)
          {
                  str[j-k+t]=rep[t];
          }
      }
      printf("%s",str);
} 