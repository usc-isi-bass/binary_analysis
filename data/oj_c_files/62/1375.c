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
		  *(b+j)='\0';
		  break;
	  }
	  else if(*(a+i)!=' ')
	  { 
		  *(b+j)=*(a+i);
		  j+=1;
	  }
	  else if(*(a+i)==' '&&*(a+i-1)!=' ')
	  {
		  *(b+j)=*(a+i);
		  j+=1;
	  }
	  else 
		  j+=0;
	 
  }
  for(j=0;*(b+j)!='\0';j++)
	  printf("%c",*(b+j));
}