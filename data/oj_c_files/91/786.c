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
    char s[110],*p,s1[110],*q,*p1;
    int i=0;
    gets(s);
    p1=s;
    for(p=s,q=s1;*p!='\0';p++,q++,i++)
      {
          if(*(p+1)!='\0')
          *q=*p+*(p+1);
          else *q=*p+*p1;
      }
    for(q=s1;q<(s1+i);q++)
       printf("%c",*q);
}