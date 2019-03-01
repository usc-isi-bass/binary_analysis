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


int main()
{
  char a[120]={'\0'} ;
  char b[120]={'\0'} ;
  char *p=0;
  int i,len;
  gets(a);
  len=strlen(a);
  for(p=a,i=0;p<a+len-1;i++,p++){b[i]=*p+*(p+1);}
  p=a;
  b[len-1]=*(p+len-1)+*p;
  puts(b);  	
  return 0;
}
