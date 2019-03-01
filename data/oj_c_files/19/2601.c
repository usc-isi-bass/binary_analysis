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
   int a,i,j=0;
   char s[101]={0},c[101],d[101];
   gets(s);
   gets(c);
   gets(d);
   a=strlen(s);
   for(i=0;i<a;i++)
      {
        char b[101]={0};
        while(s[i]!=' '&&i<a)
             {
                b[j]=s[i];
                j++;
                i++;
              }
        if(strcmp(b,c)==0)
          {
             printf("%s",d);
           }
        else
          {
             printf("%s",b);
           }
        if(i<a)
           {
              printf(" ");
           }
        j=0;
        }
    return 0;
}         