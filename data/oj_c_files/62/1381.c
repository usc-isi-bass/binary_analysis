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
{char *p,*q;
 int a,i,j;
q=p=malloc(100);
gets(q);
a=i=0;
while(*(p+i)!='\0')
{while((*(p+i)==' ')&&(*(p+i+1)==' '))
{j=i+1;
while(*(p+j)!='\0')
{*(p+j)=*(p+j+1);j++;}}
i++;}
puts(p);
return 0;}