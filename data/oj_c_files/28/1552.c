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
  char s[2000],a[200][200];
       int n=0,i,m=0,c[200]; //??m,n??????
       gets(s);
       for(i=0;i<strlen(s)+1;i++)
       {
              if(s[i]==' '||s[i]=='\0') //?????????????????
              {
                     a[m][n]='\0';
                     n=0;
                     m++;
              }
              else
              {
                     a[m][n]=s[i];
                     n++;
              }
       }
       for(i=0;i<m;i++)
       {
              c[i]=strlen(a[i]);
       }
       for(i=0;i<m-1;i++)
       {
     if(c[i]!=0)
     {
      printf("%d",c[i]);
              printf(",");//?????????????????
     }
     else
     {
     continue;
     }
       }
       printf("%d",c[m-1]);
       return 0;
}
