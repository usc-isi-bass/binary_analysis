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

main(void)
{
 int space=1,i=-1;
 char a[80];
 gets(a);
 
 while(a[++i]!='\0')
 {
  if(a[i]==' ') space=0;
  else 
  {
   if(space==0)   
   { space=1;printf(" ");}
      printf("%c",a[i]);
  }
 }
}