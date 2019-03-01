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
  char str[101],str1[101]; 
  int i,n,m,e; 
  gets(str);
  n=strlen(str);
  m=0;
  for(i=1;i<=n;i++){
    if(str[i]==' '&&str[i-1]==' ')
    continue;
    else{
    str1[m]=str[i];
    m++;                 
  } 
} printf("%c",str[0]);
  puts(str1);
  return 0;   
}