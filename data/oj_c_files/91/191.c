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
{
  char *p,*q;  int n,i;
  p=(char*)malloc(100*sizeof(char));
  q=(char*)malloc(100*sizeof(char));
  gets(p);
  n=strlen(p);
  for(i=0;i<n;i++)
  {
    if(i==n-1)*(q+n-1)=*(p+n-1)+*(p+0);
    else *(q+i)=*(p+i)+*(p+i+1);
  }
  for(i=0;i<n;i++)printf("%c",*(q+i));
}
