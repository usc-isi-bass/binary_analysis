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
char str[999],temp[300];
int len,k=0,j,i=0,a,b,c;
gets(str);
len=strlen(str);
for(j=0;j<=len;j++)
{
   if(str[j]==' ')
   {
     while(i<j)
     {
     temp[k]=str[i];
     i++;
     k++;
     }
     temp[k]='\0';
     i++;
     a=strlen(temp);
     if(a!=0)
     printf("%d,",a);
     k=0;
   }
   if(str[j]=='\0')
   {
     while(i<j)
     {
     temp[k]=str[i];
     i++;
     k++;
     }
     temp[k]='\0';
     a=strlen(temp);
     printf("%d",a);
   }
}
return 0;
}
