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
 int a,i;
q=p=malloc(100);
gets(q);
for(i=0;i<30;i++)
if(((*(p+i-1)>'9')||(*(p+i-1)<'0'))&&((*(p+i)<='9')&&(*(p+i)>='0')))
{a=atoi(p+i);printf("%d\n",a);}
return 0;}