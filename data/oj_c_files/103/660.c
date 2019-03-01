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
    char m[1000];
    scanf ("%s",m);
    int i;
    char t;
    int r;
    i=0;
    while (m[i]!='\0')
     {
        if ((m[i]>='a')&&(m[i]<='z'))
        m[i]=m[i]-32;
        i++;
      }
    i=0;
    while (m[i]!='\0')
     {
       r=0;
       t=m[i];
       while (t==m[i])
       {
         r++;
         i++;
        }
       
       printf ("(%c,%d)",t,r);
       }
     return 0;
}