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
   char s[100],w[100],t[100],ch;
   int i,j,flag;
   
   scanf("%s%c%s",&s,&ch,&w);
   for(i=0;i<strlen(w);i++)
      {
         flag=1;
         for(j=0;j<strlen(s);j++)
            if(s[j]!=w[i+j])
            {
               flag=0;
               break;             
            }        
         if(flag==1)
         {
            printf("%d",i);
            break;        
         }          
      }     
                      
   return 0;
}