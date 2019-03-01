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
   char ch[200],s[200];
   int m,i,j=0,word=0;
   gets(ch);
   m=strlen(ch);
   for(i=0;i<m;i++)
   {
      if(ch[i]!=' ')
      {
         s[j]=ch[i];
         j++;
         word=1;	
      }	
     else if(word==1)
      {
          word=0;
          s[j]=ch[i];
          j++;	
      }
   }
   puts(s);
   return 0;
}