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

void main()
{
 char *p;
 int i,j,k,n,m;
 p=(char *)malloc(100*sizeof(char));
 gets(p);
 n=strlen(p);
 for(i=0;i<n-2;i++)
    {
     printf("%c",*(p+i));
     if(*(p+i+2)==' '&&*(p+i+1)==' ')
       {
        while(*(p+i+2)==' ')
             {
              i++;
               }
       }
    }
    printf("%c%c",*(p+n-2),*(p+n-1));
}