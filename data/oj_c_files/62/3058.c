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
  int a;
  char s[2][M];
  gets(s[0]);
  a=strlen(s[0]);
  int i,k;
  k=1;
  s[1][0]=s[0][0];
  for(i=1;i<a;i++){
    if(s[0][i]!=' '||(s[0][i]==' '&&s[0][i-1]!=' ')){
      s[1][k]=s[0][i];
      k++;
    }
  }
  s[1][k]='\0';
  a=strlen(s[1]);
  for(i=0;i<a;i++){
    printf("%c",s[1][i]);
  }
return 0;
}