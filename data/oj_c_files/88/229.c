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

main()
{  char *s,*c;
   int i,j;
   s=(char *)calloc(31,sizeof(char));
   gets(s);
   for(i=0;*(s+i)!='\0';i++)
   {
    if(*(s+i)<='9'&&*(s+i)>='0')printf("%c",*(s+i));
     else
      { for(;(*(s+i)<'0'||*(s+i)>'9')&&*(s+i)!='\0';i++);

      if(*(s+i)!='\0')printf("\n");
      i--;
      }
   }

}