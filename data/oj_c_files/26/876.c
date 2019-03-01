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
    char a[max];
    char b[max];
    int k[max]={0};
    int i,j;
    gets(a);
    for(i=1;a[i];i++)
    {
      if((a[i]==' ')&&(a[i-1]==' '))
      {
        k[i]=1;
      }
    }
    for(i=0,j=0;a[i];i++)
    {
     if(k[i]==0)
     {
     b[j]=a[i];
     j++;
     }
     else
     {    
         continue;
     }
    }
    b[j]='\0';
    puts(b);
    return 0;
}