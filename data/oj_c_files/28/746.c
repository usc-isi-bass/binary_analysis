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
int n,i,j=0;char a[10000],*p=a;
gets(a);
n=strlen(a);
for(p=a;;p++)
{
if (*p==' ')
     { if(*(p-1)!=' ')  {printf("%d,",j);j=0;}else goto z;}
else if(*p=='\0')  {printf("%d",j);break;}
      else  j=j+1;
z: ;
}
}
