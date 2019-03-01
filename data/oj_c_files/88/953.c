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
   char str[100],temp[100];                   //?????? 
   char *p=str,*q=temp;       //?????????????????a
   int i=0,j=0,flag;                            //??????N
   cin.getline(p,100);
   while(1)
   {
          
          if(*p<=57&&*p>=48)
          {*q=*p;q++;flag=1;}          
          else if(flag==1)
          { *q=0;
               q=temp;
               cout<<q<<endl;
               flag=0;
          }
          if(*p==0)
          break;          
        p++;
   }
     
 
    return 0;
}