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


int main (int argc, char *argv[])
{
  char a[80],b[80];
  int c,i;
  gets(a);
  gets(b);
  for(i=0;a[i]!='\0';i++)
  {
     if(a[i]>(char)64&&a[i]<(char)91)
     {a[i]=(char)a[i]+32;}
  }
  for(i=0;b[i]!='\0';i++)
  {
     if(b[i]>(char)64&&b[i]<(char)91)
     {b[i]=(char)b[i]+32;}
  }
  c=strcmp(a,b);
  if(c>0)printf(">\n");
  else if(c==0)printf("=\n");
  else if(c<0)printf("<\n");
  return 0;
}