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
 int a=0,i,x;
 char c[10000];
 gets(c);
 for(i=0;c[i]!='\0';i++)
 {
  if(c[i]!=' '){a=a+1;x=1;}
  else 
  {
   if(x==1)
	  { if(c[i]==' ')
   {printf("%d,",a);x=0;};
	   a=0;}
      }
}printf("%d",a);
}
