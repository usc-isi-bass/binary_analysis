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
{ int i=-1,shortlen=100,longlen=0;
  char str[500];
  char *c,*max,*min,*flag1,*flag2;
  c=max=min=str;
  gets(c);
  
  do{  
	  flag1=flag2=c;
	  while(*c!=' '&&*c!='\0')c++;
      
	  if(longlen<c-flag1)
	  {longlen=c-flag1;max=flag1;}
	  if(shortlen>c-flag2)
	  {shortlen=c-flag2;min=flag2;}
	  c++;
  }
  while(*(c-1)!='\0');

 for(i=1;i<=longlen;i++)
  printf("%c",*max++);
 printf("\n");

 for(i=1;i<=shortlen;i++)
	 printf("%c",*min++);
}