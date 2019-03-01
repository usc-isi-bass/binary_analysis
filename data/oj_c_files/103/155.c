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
      char l[1000];
      int i,count=1;
      scanf("%s",l);
      for(i=0;l[i]!='\0';i++)
      {
                          if((l[i+1]==l[i])||(l[i+1]==l[i]+32)||(l[i+1]==l[i]-32))
                          count=count+1;
                          else
                          {
                              if(l[i]>='a'&&l[i]<='z')
                              {
                                printf("(%c,%d)",l[i]-32,count);
                                count=1;
                               } 
                              else
                              {
                                printf("(%c,%d)",l[i],count);
                                count=1;
                               }
                          }
      }
      return 0;
}
          
      