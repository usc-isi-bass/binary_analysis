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
 char a[40];
 int i=0;
 gets(a);
 printf("\n");
 while(*(a+i)!='\0')
  {
    if(*(a+i)>='0'&&*(a+i)<='9') printf("%c",*(a+i));
    else if(*(a+i+1)>='0'&&*(a+i+1)<='9') printf("\n");
    i++;
   }
}