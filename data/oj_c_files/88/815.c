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
	char c[30],*p;
	int num=1;
	gets(c);
	for(p=c;*p!='\0';p++)
	   {
	   if((*p>47)&&(*p<58))
	      {
		  if(num==1)
	      {
		  printf("%c",*p);
		  num=1;
	      }
          else
          {
		  printf("\n%c",*p);
		  num=1;
          }
	      }
       else
          num=0;
	   }
}