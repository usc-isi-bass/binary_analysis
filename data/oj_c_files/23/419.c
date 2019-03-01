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
{  char a[100][30]={0};                           //?????????? 
   int i=0;
   int j=0;
   char b;
   while(1)
   {  cin.get(b);
      if(b=='\n') break;                          //???????? 
      else  
        {  if(b==' ')       
              {    i=i+1;
                   j=0;
                   continue;                     //?????????? 
              }
           else                                  //???????? 
             {  a[i][j]=b;
                j=j+1;
             }
        }
      
      
   }
  for(j=i;j>0;j--)
      {  cout<<a[j]<<' ';                     //?? 
      }
   cout<<a[0];
   return 0;
}