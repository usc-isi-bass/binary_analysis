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
{ char str[100];
  gets(str);
  char *p,*p0,*q,*q0;
  int k,i;
  k=strlen(str);
  p=(char *)calloc(100,sizeof(char)); 
  q=(char *)calloc(100,sizeof(char));
  p=str;
  for(i=0;i<k-1;i++)
   {*(q+i)=*(p+i+1)+*(p+i);}
  *(q+k-1)=*p+*(p+k-1);
  for(i=0;i<k;i++)
   printf("%c",*(q+i));
}
  
  