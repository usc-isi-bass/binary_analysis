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
  int  i,j,k;
  char s[102];
  gets(s);
   for(i=1;i<strlen(s);i++)
     {
       if(s[i]!=s[0])
           {
             for(j=i-1;j>=0;j--)
               {
                 if(s[j]!=s[i])
                    {
                      s[j]=s[i];
                      printf("%d %d\n",j,i);
                       break;
                     }
                }
             } 
       }
return 0;
}