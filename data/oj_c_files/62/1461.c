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
   char *str,*p;
   str=(char *)malloc(100*sizeof(char));
   gets(str);
   p=str;
   for (;*p!='\0';p++)
       {  if(*p!=' ') printf("%c",*p);
          else if(*(p-1)!=' ') printf(" ");
        }
}