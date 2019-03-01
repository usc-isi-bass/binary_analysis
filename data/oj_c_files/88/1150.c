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
   int step=0;     //step????????????????????????
   char *p,*q;     //p????????????q????????????
   char str[50];   //????????
   cin.getline(str,31,'\n');  //?????
   for(p=str;p<str+31;p++)    
   {

      if(*p<'0' || *p>'9')    //????
        continue;
      else       
      {
          for(q=p;q<str+31;q++)  //?q??p
          {
              if(*q>='0' && *q<='9')  //???????????p??????????
              {
                 step++;
                 cout<<*q;
              }
              else 
              {
                 cout<<endl;
				 p=p+step;  //p???????
				 step=0;  //??
                 break;
              }
          }
      }
	  if(*p=='\n') break;
     
   }
   return 0;
}   