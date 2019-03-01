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
 char in[1000];
 int a=1,b,c;
 scanf("%s",in);
 for(int i=0;in[i]!='\0';i++) 
    {
         if(in[i]>='a') in[i]=in[i]-'a'+'A';
         else in[i]=in[i];
        }   
 
 for(int i=0;in[i]!='\0';i++)
   if(in[i]==in[i+1]){ a++;
                        continue  ;}
   else
   {  printf("(%c,%d)",in[i],a);
       a=1;
   }
 
      
  return 0;     
       
}
