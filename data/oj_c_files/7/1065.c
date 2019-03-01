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
   char str[257];
   char sub[257];
   char rep[257];
   int i=0,j=0,k=0,a;
   gets(str);
   gets(sub);
   gets(rep);
   a=strlen(sub); 
   for(i=0;str[i]!='\0';i++)
   {                   
        if(str[i]==sub[j])
        {
          j++;                
          if(j==a)
          {
            k=i;
            break;
          }
        }   
        else j=0;
   }  
   for(i=0;str[i]!='\0';i++)
   {
      if(i==k-a+1)
      {
        printf("%s",rep);
        i=k;
      }
      else printf("%c",str[i]);
   } 
   getchar();
   getchar();
   getchar();
}      
   