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

void main ()
{
     char s[1000],c[1000];
     int i,j,l,d=0,t[1000]={0};
     scanf ("%s",s);
     l=strlen(s);
     c[0]=s[0];
     t[0]=1;
     for (i=1;i<l;i++)
     {
         if (s[i]==s[i-1]||s[i]==s[i-1]+32||s[i]==s[i-1]-32)
         {
         t[d]++;
         }
         else 
         {
              d++;
              c[d]=s[i];
              t[d]++;
         }
     }
     for (i=0;i<=d;i++)
     {
     if (c[i]<=90)
     printf("(%c,%d)",c[i],t[i]);
     else
     printf("(%c,%d)",c[i]-32,t[i]);
     }
     
}
