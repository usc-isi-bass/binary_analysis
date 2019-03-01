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

int fscan(int *n)
{
 char c;
 *n=0;
 do
   {
    c=getchar();
    if(c=='\n')return 0;
    if(c!=',')
      {
       *n=*n*10+c-'0';
      }
   }while(c!=',');
 return 1;
}    
    
    
int main()
{
    int n;
    int first=-1,second=-1;
    int temp;
    temp=fscan(&n);
    first=n;
    while(temp)
         {
          temp=fscan(&n);
          if(n>first)
            {
             second=first;
             first=n;
            }
          else if(n>second&&n!=first)
                 second=n;
         }    
   if(second==-1)printf("No");
   else printf("%d",second);
   return 1;
}                 
