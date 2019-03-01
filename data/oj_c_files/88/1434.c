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


int main(int argc, char *argv[])
{
  int i,j,k;
  char c[50];
  gets(c);
  k=strlen(c);
  for(i=0;i<k;i++)
  {
   if(c[i]>=48&&c[i]<=57)
   {
    if(c[i+1]>=48&&c[i+1]<=57)printf("%c",c[i]);
    else
    printf("%c\n",c[i]);
   }
  }
	
  return 0;
}
