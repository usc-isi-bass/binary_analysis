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

int main(){
  char s[101];
  char *p,*q,c;
  int n,i;
  gets(s);
  n=strlen(s);
  q=s;
  p=s;
  for(i=0;i<n-1;i++){
   c=*p+*(p+1);
   p++;
   printf("%c",c);
   }
  c=*p+*q;
  printf("%c",c);
  
  }