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
{ char *p,*q;
  int i,c=0;
  p=(char *)malloc(101*sizeof(char));
  q=(char *)malloc(101*sizeof(char));
  for(i=0;;i++)
  {scanf("%c",p+i);c++;
   if(*(p+i)=='\n')break;}
  for(i=0;i<c-2;i++)
	  *(q+i)=*(p+i)+*(p+i+1);
  *(q+i)=*(p+i)+*p;
  for(i=0;i<c-1;i++)
  printf("%c",*(q+i));
}







