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
    char a[101],b[101];
    int len1,len2,i,j=1;
    gets(a);
    len1=strlen(a);
    b[0]=a[0];
    for(i=1;i<len1;i++)
    {
      if(a[i]!=' ')
      {
         b[j]=a[i];
         j++;  
      }
      else if(a[i]==' '&&a[i+1]!=' ')
      {
         b[j]=a[i];
         b[j+1]=a[i+1];
         ++i;
         j+=2;
      }  
    }
    b[j]='\0';
    len2=strlen(b);
    for(i=0;i<len2;i++)
    {printf("%c",b[i]);}
                             
                
}
