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
    char c[100];
    gets(c);
    int l,j;
    l=strlen(c);
    int i,t; 
    t=l; 
    for(i=l-1;i>=0;i--)
    {
               if (c[i]==' ')
                  {
                           for(j=i+1;j<t;j++)
                           {
                                             printf("%c",c[j]);
                           }
                           printf(" ");
                           t=i;
                  }
    }
    for(i=0;i<l;i++)
    {
                 if(c[i]==' ')
                 break;
                 else
                 printf("%c",c[i]);
    }
    getchar();
    getchar();
}