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
 char str[3000];
 int i=0,flag=0,letter=0;
 gets(str);
 while(1)
      {
       if(str[i]==' '||str[i]=='\0')
         {
          if(letter)
            {
                if(flag)
                   printf(",");
                else 
                     flag=1;
                printf("%d",letter);
                letter=0;
           }
         }  
       else 
           letter++;
       if(!str[i])
         break;
       i++;
       }
 return 1;
}           
           
          
