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
int i,k;
char jz[2][1001];
 k=0;
 gets(jz[0]);
 for(i=0;i<strlen(jz[0]);i++){
  if(jz[0][i]!=' '||jz[0][i]==' '&& jz[0][i-1]!=' '){
   jz[1][k]=jz[0][i];
   k++;
}
}
jz[1][k]='\0';
printf("%s",jz[1]);
return 0;
}
