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
   char str[LEN];
   int i,wordlen=0,maxlen=0,minlen=30,iofmax,iofmin;
   
   gets(str);
   for(i=0;;i++)
   {
      if(str[i]!=' '&&str[i]!='\0') wordlen++;
      else
      {
        if(wordlen>maxlen)
        {
           maxlen=wordlen;
           iofmax=i-wordlen;
        }
        if(wordlen<minlen)
        {
           minlen=wordlen;
           iofmin=i-wordlen;
        }
        wordlen=0;
      }
      if(str[i]=='\0') break;
   }
   
   for(i=iofmax;i<iofmax+maxlen;i++) printf("%c",str[i]);
   printf("\n");
   for(i=iofmin;i<iofmin+minlen;i++) printf("%c",str[i]);
   printf("\n");

  return 0;
}
