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
   int len,i,j,maxASCII=0,max;
   char str[15],substr[4],*p=str,*q=substr;
   while(cin>>str>>substr)
   {
      maxASCII=0;
      len=strlen(str);
      for(i=0;i<len;i++)
      {
          if(*(p+i)>maxASCII)
          {
             maxASCII=*(p+i);
             max=i;
          }
      }
      for(i=len-1;i>max;i--)
      {
          *(p+i+3)=*(p+i);
      }
      for(i=max+1,j=0;i<=max+3;i++,j++)
      {
          *(p+i)=*(q+j);
      }
      for(i=0;i<len+3;i++)
      {
          cout<<str[i];
      }
      cout<<endl;
   }
   return 0;
}