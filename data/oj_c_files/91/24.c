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
  char a[102];
  int i;
  gets(a);
  for(i=0;;i++){
      printf("%c",a[i]+a[i+1]);
      if(a[i+2]=='\0'){
         break;
        }
     }
  printf("%c",a[i+1]+a[0]);
  return 0;
}