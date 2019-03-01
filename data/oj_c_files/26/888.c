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


int main()
{ 
    char str[200];
     int i,n;
    gets(str);
   
    n=strlen(str);
     for(i=0;i<n;i++)
      {
                    if((str[i])!=' ')
                    {
                                printf("%c",str[i]);
                                }
                    else if((str[i])==' ')
                    {
                         if((str[i+1])==' ')
                         continue;
                         else if((str[i+1])!=' ')
                         {
                              printf("%c",str[i]);
                              }
                         }
                    
                    }
    
 
   return 0;
   }

