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
   int i,j;
   char s[101];
   gets(s);

   for(i=0;s[i]!='\0';i++)
     if((s[i]==' ')&&(s[i+1]==' ')) 
        { {for(j=i;s[j]!='\0';j++)
             s[j]=s[j+1];}
         i--;}
  
  puts(s);
  return 0; 
}