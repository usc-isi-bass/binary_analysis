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
{ char*str,*p;int k=1;
  str=(char *)malloc(40*sizeof(char));
  gets(str);
  p=str;
  for (;*p!='\0';p++)
  { if (*p>='0'&&*p<='9')
    {printf("%c",*p);k=1;}
    else if(k=1) {printf("\n");k=0;}
  }
}