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
      int i,j,n;
      char *s;
      s=(char*) malloc (sizeof(char)*10000);
      gets(s);
      n=strlen(s);
      for(i=0;*(s+i)!='\0';i++)
      {
                              if(*(s+i)==' ')
                              {
                                           if(*(s+i+1)==' ')
                                           {
                                                          for(j=i;*(s+j)!='\0';j++) 
                                                          {
                                                                                    *(s+j)=*(s+j+1);
                                                          }
                                                          i--;
                                           }
                              }
      }
      puts(s);

}
