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
	int i,j=0;
  char *a;
  a=(char *)malloc(1000*sizeof(char));
  char *b;
  b=(char *)malloc(1000*sizeof(char));
  gets(a);
  for(i=0;;i++)
  {   
	  if(*(a+i)=='\0')
	  {
		  *(b+i)='\0';
		  break;
	  }
	  else if(*(a+i+1)=='\0') *(b+i)=*(a+i)+*(a+0);
	  else *(b+i)=*(a+i)+*(a+i+1);

  }
  for(i=0;*(b+i)!='\0';i++)
	  printf("%c",*(b+i));
}