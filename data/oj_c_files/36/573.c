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
    int i;
    char temp;
    char letter1[53],letter2[53];
    for(i=0;i<52;i++)
       {
        letter1[i]=1;
        letter2[i]=1;
        } 
    letter1[52]='\0';
    letter2[52]='\0';
    while((temp=getchar())!=' ')
         {
          if(temp>='a'&&temp<='z')
             temp-='a';
          else 
              temp-='A';
          letter1[temp]++;
          } 
    while((temp=getchar())!='\n')
         {
          if(temp>='a'&&temp<='z')
             temp-='a';
          else 
              temp-='A';
          letter2[temp]++;
          }
   if(strcmp(letter1,letter2)==0)
     printf("YES");
   else 
       printf("NO");
   return 1;
}                          
