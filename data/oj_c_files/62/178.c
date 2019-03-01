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

int main(void)
{
    char s[2000];
    gets(s);
   char ss[2000];
   int i,j=0;
   for(i=0;i<strlen(s);i++)
     {
        if(!((s[i]==32)&&(s[i+1]==32)))
            ss[j++]=s[i];  
  
         }
   ss[j]='\0';
    printf("%s",ss);
    getchar();
    getchar();
    
}