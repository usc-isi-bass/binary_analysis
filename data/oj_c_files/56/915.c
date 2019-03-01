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
   int i,n,a[5];
   char c,t,str[5];
   gets(str);
   n=0;
   for(i=0;(c=str[i])!='\0';i++)
      n=n+1; 
   for(i=0;i<n/2;i++)
    {
     t=str[i];
     str[i]=str[n-1-i];
     str[n-1-i]=t;
    }
     for(i=0;i<n;i++) printf("%c",str[i]);
}


